/*Problem Statement: Given an array that contains both negative and positive 
integers, find the maximum product subarray.*/

#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>nums){
    int n=nums.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int cnt=1;
        for(int j=i;j<n;j++){
            cnt*=nums[j];
            maxi=max(maxi,cnt);
        }
    }

    return maxi;
}

int main(){
     vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    /*Time Complexity: O(N2)

Reason: We are using 2 nested loops for finding all possible subarrays 
and their product.

Space Complexity: O(1)

Reason: No extra data structure was used*/
}    