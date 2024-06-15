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
    set<vector<int>>st;

    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            set<int>hashSet;
            for(int k=j+1;k<n;k++){
                long long sum=nums[i];sum+=nums[j];sum+=nums[k];
                long long fourth=target-sum;
                if(hashSet.find(fourth)!=hashSet.end()){//we found fourth
                   vector<int> temp={nums[i],nums[j],nums[k],(int)fourth};
                   sort(temp.begin(),temp.end());
                   st.insert(temp);
                }
                hashSet.insert(nums[k]); /*irrespective of whether of if block executed
                or not,nums[k] will be inserted in hashSet*/
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
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

/*Time Complexity: O(N3*log(M)), where N = size of the array, M = no. of
 elements in the set.
Reason: Here, we are mainly using 3 nested loops, and inside the loops
 there are some operations on the set data structure which take log(M) time complexity.

Space Complexity: O(2 * no. of the quadruplets)+O(N)
Reason: we are using a set data structure and a list to store the quads. This
 results in the first term. And the second space is taken by the set data 
 structure we are using to store the array elements. At most, the set can contain
  approximately all the array elements and so the space complexity is O(N).*/
}