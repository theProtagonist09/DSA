/*Problem Statement: Given an integer array arr of size N, sorted in 
ascending order (with distinct values). Now the array is rotated between 
1 to N times which is unknown. Find how many times the array has been rotated. */

/*Observation: 

We can easily observe that the number of rotations in an array is equal 
to the index(0-based index) of its minimum element.

So, in order to solve this problem, we have to find the
 index of the minimum element.*/

#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int idx=-1;  //for finding idx of minimum element

        int low=0,high=n-1;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[low]<=nums[mid]){  //if left half is sorted
              if(nums[low]<mini){
                mini=nums[low];    //update mini
                idx=low;         //update idx of mini
               }
              low=mid+1;   //then move to unsorted part
            }else{  //if right half is sorted
                if(nums[mid]<mini){
                mini=nums[mid];    //update mini
                idx=mid;         //update idx of mini
               }
                high=mid-1; //then move to unsorted part
            }
        }
        return idx;
    }

int main(){
      vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findKRotation(nums);
    cout << "The array is rotated " << ans << " times.\n";
}