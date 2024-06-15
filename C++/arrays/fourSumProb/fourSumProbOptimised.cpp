/*Problem Statement: Given an array of N integers, your task is to find unique
 quads that add up to give a target value. In short, you need to return an array
  of all the unique quadruplets [arr[a], arr[b], arr[c], arr[d]] such that their 
  sum is equal to a given target.
    Note:   0 <= a, b, c, d < n
    a, b, c, and d are distinct.
    arr[a] + arr[b] + arr[c] + arr[d] == target
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums,int target){
     int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){continue;}
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1]){continue;}
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long sum=0;
                    sum=nums[i];sum+=nums[j];sum+=nums[k];sum+=nums[l];
                    if(sum<target){
                        k++;
                    }else if(sum>target){
                        l--;
                    }else{
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;l--;
                        while(k<l && nums[k]==nums[k-1]){k++;}
                        while(k<l && nums[l]==nums[l+1]){l--;}
                    }
                }
            }
        }
        return ans;
}

int main(){
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    vector<vector<int>> ans = fourSum(nums, target);
    cout << "The quadruplets are: "<<endl;
    for (auto it : ans) {
        cout << "[";
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << endl;
    /*Time Complexity: O(N^3), where N = size of the array.
Reason: Each of the pointers i and j, is running for approximately N times.
 And both the pointers k and l combined can run for approximately N times 
 including the operation of skipping duplicates. So the total time complexity
  will be O(N^3). 

Space Complexity: O(no. of quadruplets), This space is only used to store the
 answer. We are not using any extra space to solve this problem. So, from that
  perspective, space complexity can be written as O(1).*/
}