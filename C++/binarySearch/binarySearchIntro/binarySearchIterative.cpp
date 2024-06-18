/*Problem statement: You are given a sorted array of integers and a target,
 your task is to search for the target in the given array. Assume the given
  array does not contain any duplicate numbers.*/
  #include<bits/stdc++.h>
  using namespace std;

  int binarySearch(vector <int> a,int target){
    int n=a.size();
    int low=0,high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(a[mid]==target){return mid;}
        else if(target> a[mid]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1; //if target is not found
  }
  
  int main(){
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = binarySearch(a, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "<< ind << endl;

    //TC:O(log(N)) at the base 2
    //SC: O(1)
  }