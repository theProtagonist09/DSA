/*Problem Statement: Given an array of length N. Peak element is defined as the element
 greater than both of its neighbors. Formally, if 'arr[i]' is the peak element, 
 'arr[i - 1]' < 'arr[i]' and 'arr[i + 1]' < 'arr[i]'. Find the index(0-based) of 
 a peak element in the array. If there are multiple peak numbers, return the index 
 of any peak number.
 
 nums[i] != nums[i + 1] for all valid i.
 
 You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is 
 always considered to be strictly greater than a neighbor that is outside the array.*/


#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> nums){
    int n=nums.size();
    if(n==1){  //if arr ,contains only one element
        return 0;
    }

    if(nums[0]>nums[1]){  // handling edge cases
        return 0;
    }

    if(nums[n-1]>nums[n-2]){// handling edge cases
        return n-1;
    }

    int low=1,high=n-2;  //trimming search space, as we handled edge cases manually
    while(low<=high){
        int mid=(low+high)/2;

        if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
            return mid;   //if mid is pointing to peak
        }else if(nums[mid-1]<nums[mid] && nums[mid]<nums[mid+1]){
            //agar mid chadhan ke trf point krrha hai,then search space right shitf kro
            low=mid+1;
        }else if(nums[mid-1]>nums[mid] && nums[mid]>nums[mid+1]){
            //agar mid dhalan ke trf point krrha hai, then search space left shift kro
            high=mid-1;
        }else{
            /*if mid, lowest point pe phuch gya h,then aage ya piche kahi bhi chle jao
              both sides me peak miljaega hi*/
              low=mid+1;  //or high =mid-1;  ,both is valid
        }
    }
    return -1;

}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 5, 4, 3, 1};
    int ans = findPeakElement(nums);
    cout << "The peak is at index: " << ans << "\n";
    return 0;
    /*Time Complexity: O(logN), N = size of the given array.
Reason: We are basically using binary search to find the minimum.

Space Complexity: O(1)
Reason: We have not used any extra data structures, this makes space complexity,
 even in the worst case as O(1).*/
}