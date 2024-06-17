/*Problem Statement: Given an array that contains both negative and positive 
integers, find the maximum product subarray.*/

#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>nums){
    int n=nums.size();
    int maxi=INT_MIN;
    int preProd=1,suffProd=1;

    for(int i=0;i<n;i++){
        if(preProd==0){
            preProd=1;
        }if(suffProd==0){
            suffProd=1;
        }

        preProd*=nums[i];
        suffProd*=nums[n-1-i];
        maxi=max(maxi,max(preProd,suffProd));
    }

    return maxi;
}

int main(){
     vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    /*Complexity Analysis
Time Complexity: O(N), N = size of the given array.
Reason: We are using a single loop that runs for N times.

Space Complexity: O(1) as No extra data structures are used for computation.*/
}    