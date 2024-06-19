/*Problem Statement: Given an integer array arr of size N, sorted in ascending order
 (with duplicated values). Now the array is rotated at some pivot point unknown to you.
  Find the minimum element in the array. */

  #include<bits/stdc++.h>
  using namespace std;

   int findMin(vector<int>& nums) {
        int n=nums.size();

        int mini=INT_MAX;

        int low=0,high=n-1;

        while(low<=high){
            int mid=(low+high)/2;

            if(nums[low]==nums[mid] && nums[mid]==nums[high]){/*just add this
             "if block" in case of duplicate elements*/

                if(nums[low]<mini){
                    mini=nums[low];  //update mini
                }
                low++;    
                high--;
                continue;
            }

            if(nums[low]<=nums[mid]){  // if left half is sorted
               if(nums[low]<mini){
                mini=nums[low];    //update mini
               }
               low=mid+1;     //going to unsorted part
               
            }else{     //if right half is sorted
               if(nums[mid]<mini){
                mini=nums[mid];    //update mini
               }
               high=mid-1;    //going to unsorted part
            }
        }
        return mini;
    }
  
  int main(){
     vector<int>nums = {2,2,2,0,1};
    int ans = findMin(nums);
    cout << "The minimum element is: " << ans << "\n";
  }