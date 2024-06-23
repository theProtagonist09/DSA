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

 int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1){   //if it contains single element ,then nums[-1]<nums[0]>nums[n]
            return 0;
        }
        if(nums[0]>nums[1]){  //if nums[0]>nums[1],then nums[0] is peak indeed
            return 0;
        }

        if(nums[n-1]>nums[n-2]){//if nums[n-1]>nums[n-2],then nums[n-1] is peak indeed
            return n-1;
        }

        for(int i=1;i<=n-2;i++){
            if(nums[i]>nums[i+1] && nums[i]>nums[i-1]){ //searching peak from idx=1 to n-2
                return i;
            }
        }
        return -1;
    }
 
 int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int ans = findPeakElement(nums);
    cout << "The peak is at index: " << ans << "\n";
    return 0;
 }