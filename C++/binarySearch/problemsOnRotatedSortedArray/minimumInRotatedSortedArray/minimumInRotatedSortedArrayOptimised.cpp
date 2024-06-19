/*Problem Statement: Given an integer array arr of size N, sorted in ascending order
 (with distinct values). Now the array is rotated at some pivot point unknown to you.
  Find the minimum element in the array. */

  #include<bits/stdc++.h>
  using namespace std;

    int findMin(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;

        int low=0,high=n-1;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[low]<=nums[mid]){  //if left half is sorted
              if(nums[low]<mini){
                mini=nums[low];    //update mini
               }
              low=mid+1;   //then move to unsorted part
            }else{  //if right half is sorted
                if(nums[mid]<mini){
                mini=nums[mid];    //update mini
               }
                high=mid-1; //then move to unsorted part
            }
        }
        return mini;
    }
  
  int main(){
    vector<int>nums = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findMin(nums);
    cout << "The minimum element is: " << ans << "\n";
    /*Time Complexity: O(logN), N = size of the given array.
Reason: We are basically using binary search to find the minimum.

Space Complexity: O(1)
Reason: We have not used any extra data structures, this makes space complexity,
 even in the worst case as O(1)*/
  }