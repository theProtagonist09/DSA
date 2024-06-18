/*Problem Statement: You're given an sorted array arr of n integers and an integer 
x. Find the floor and ceiling of x in arr[0..n-1].
The floor of x is the largest element in the array which is smaller than or equal to x.
The ceiling of x is the smallest element in the array greater than or equal to x.*/

/*The floor of x is the largest element in the array which is smaller than or equal 
to x( i.e. largest element in the array <= x).*/

/*The ceiling of x is the smallest element in the array greater than or equal to
 x( i.e. smallest element in the array >= x).

From the definitions, we can easily understand that the ceiling of x is basically
 the lower bound of x*/

 #include<bits/stdc++.h>
 using namespace std;
 
  int getCeil(int arr[],int n,int x){ //arr[ans]>=x  this is lower_bound algo
    int low=0,high=n-1;
    int ans=-1;    

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=arr[mid];
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
  }

  int getFloor(int arr[],int n,int x){ //arr[ans]<=x this is reverse of lower_bound algo
    int low=0,high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=x){
            ans=arr[mid];
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
  }

  pair<int,int> getFloorAndCeil(int arr[],int n,int x){
    int f=getFloor(arr, n, x);
    int c=getCeil( arr, n,x);

    return {f,c};
  }

 int main(){
    int arr[] = {3, 4, 4, 7, 8, 10};
	int n = 6, x = 5;
	pair<int, int> ans = getFloorAndCeil(arr, n, x);
	cout << "The floor and ceil are: " << ans.first<< " " << ans.second << endl;

    /*Time Complexity: O(logN), where N = size of the given array.  log at base 2
Reason: We are basically using the Binary Search algorithm.

Space Complexity: O(1) as we are using no extra space.*/
 }