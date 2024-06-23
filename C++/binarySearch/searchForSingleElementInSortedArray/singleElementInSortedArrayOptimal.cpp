/*Problem Statement: Given an sorted array of N integers. Every number in
 the array except one appears twice. Find the single number in the array.*/

 #include<bits/stdc++.h>
 using namespace std;

  int singleNonDuplicate(vector<int> nums){
     int n=nums.size();
        if(n==1){  // if arr contains a single element
            return nums[0];
        }

        if(nums[0]!=nums[1]){
            return nums[0]; //checking for first element,i.e. taking care of edge cases
        }
        if(nums[n-1]!=nums[n-2]){
            return nums[n-1];//checking for last element,i.e. taking care of edge cases
        }

       /*NOTE: we are init our low and high from diff places to avoid edge cases,
         WE ARE TRIMMING OUR SEARCH SPACE,to avoid edge case*/
        int low=1,high=n-2;  
        while(low<=high){
            int mid=(low+high)/2;

            //if nums[mid] is the single element
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }

    /*if nums[mid] isn't single element, and mid is in left of single element
    (duniya badalne se pehle)*/
        if((mid%2==0 && nums[mid]==nums[mid+1])||(mid%2==1 && nums[mid]==nums[mid-1])){
           low=mid+1;
          /*then right half me chalo, coz abhi hum normal dunia m h,so nexus 
          event fututre me hoga(nexus event is appearance of single element)*/
        }else{
        /*if mid isn't in left of nexus,then mid is in right of nexus,
         i.e. dunia badal chuka h*/
            high=mid-1;
            //so nexus event past me hua hoga, so past m chlo, i.e. left half me
        }
        }

        return -1;
    }
 
 
    int main(){
     vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = singleNonDuplicate(nums);
    cout << "The single element is: " << ans << "\n";
    return 0;

    /*Time Complexity: O(logN), N = size of the given array.
Reason: We are basically using the Binary Search algorithm.

Space Complexity: O(1) as we are not using any extra space.*/
 }