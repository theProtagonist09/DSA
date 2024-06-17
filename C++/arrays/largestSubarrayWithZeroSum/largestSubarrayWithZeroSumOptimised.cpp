/*Problem Statement: Given an array containing both positive and negative 
integers, we have to find the length of the longest subarray with the sum 
of all elements equal to zero.*/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&a){
    int n=a.size();
    unordered_map<int,int> mpp; //stores,<prefix sum,idx>

    int sum=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==0){
            maxi=i+1;
        }else if(mpp.find(sum)!=mpp.end()){  //sum is found in map
            maxi=max(maxi,i-mpp[sum]);
        }else{//sum is not in map
            mpp[sum]=i;
        }
    }
    return maxi;
}

int main(){
     vector<int> a = {9, -3, 3, -1, 6, -5};
    cout << solve(a) << endl;
    /*Time Complexity: O(N), as we are traversing the array only once

Space Complexity: O(N), in the worst case we would insert all array elements
 prefix sum into our hashmap*/
}