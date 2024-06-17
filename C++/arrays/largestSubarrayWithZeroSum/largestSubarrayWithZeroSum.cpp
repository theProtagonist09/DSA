/*Problem Statement: Given an array containing both positive and negative 
integers, we have to find the length of the longest subarray with the sum 
of all elements equal to zero.*/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&a){
    int n=a.size();
    int len=0;

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum==0){
                len=max(len,j-i+1);
            }
        }
    }
    return len;
}

int main(){
     vector<int> a = {9, -3, 3, -1, 6, -5};
    cout << solve(a) << endl;
    /*Time Complexity: O(N^2) as we have two loops for traversal

Space Complexity: O(1) as we aren’t using any extra space.*/
}