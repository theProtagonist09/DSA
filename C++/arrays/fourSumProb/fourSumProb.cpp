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
    set<vector<int>> st;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    long long sum=nums[i];
                    sum+=nums[j];sum+=nums[k];sum+=nums[l];
                    if(sum==target){
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }

                }
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
    /*Time Complexity: O(N4), where N = size of the array.
Reason: Here, we are mainly using 4 nested loops. But we not considering
 the time complexity of sorting as we are just sorting 4 elements every time.

Space Complexity: O(2 * no. of the quadruplets) as we are using a set data
 structure and a list to store the quads.*/
}