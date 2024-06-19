/*Problem Statement: Given an integer array arr of size N, sorted in ascending 
order (with distinct values) and a target value k. Now the array is rotated at 
some pivot point unknown to you. Find the index at which k is present and if k
 is not present return -1.*/

#include<bits/stdc++.h>
using namespace std;

int search(vector <int> arr,int n,int k){
    int low=0,high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==k){
            return mid;

        }
        
        if(arr[low]<=arr[mid]){  //if left half is sorted
          if(arr[low]<=k && k<=arr[mid]){//check if k is present in sorted portion
            high=mid-1;

          }else{
            low=mid+1;  //k is present in unsorted portion
          }
        }else{   //if left half isn't sorted, i.e right half is sorted
          if(arr[mid]<=k && k<=arr[high]){ //check if k is present in sorted portion
            low=mid+1;
          }else{
            high=mid-1;
          }
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9, k = 1;
    int ans = search(arr, n, k);
    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";
    /*Time Complexity: O(logN), N = size of the given array.,log at base 2
Reason: We are using binary search to search the target.

Space Complexity: O(1)
Reason: We have not used any extra data structures, this makes space
 complexity, even in the worst case as O(1).*/
}