/*Problem Statement: Given a sorted array of N integers and an integer x, 
write a program to find the lower bound of x.*/

/*What is Lower Bound?
The lower bound algorithm finds the first or the smallest index in a sorted 
array where the value at that index is greater than or equal to a given key i.e. x.

The lower bound is the smallest index, ind, where arr[ind] >= x. But if any
 such index is not found, the lower bound algorithm returns n i.e. size of
 the given array.*/

 #include<bits/stdc++.h>
 using namespace std;

 int lowerBound(vector<int> arr,int n,int x){
    int low=0,high=n-1;
    int ans=n;  //assuming ans to be n, initially
    
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }else{ //arr[mid]<x
        low=mid+1;
        }
    }
    return ans;
 }
 
 int main(){
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    int ind = lowerBound(arr, n, x);
    cout << "The lower bound is the index: " << ind << "\n";
    //TC:O(log(N)) at the base 2
    //SC: O(1)



    //higher bound is similar to lower bound
    /*The higher bound is the smallest index, ind, where arr[ind] > x. But if any
 such index is not found, the higher bound algorithm returns n i.e. size of
 the given array.
 
     only a simple change in code will be


       int low=0,high=n-1;
    int ans=n;  //assuming ans to be n, initially
    
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
            ans=mid;
            high=mid-1;
        }else{ //arr[mid]<=x
        low=mid+1;
        }
    }
    return ans;*/


    /*C++ STL for lower bound and upper Bound
    lb=lower_bound(arr.begin(),arr.end(),x) - arr.;
    ub=upper_bound(arr.begin(),arr.end(),x);*/
 }