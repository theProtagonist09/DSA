//given an array, find length of longest subarray,which has sum k
//subarray is a contiguous part of array

// brute force soln
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    int arr[n]={1,2,3,1,1,1,1,4,2,3}; //subarray with sumReq=6 are.[1,2,3],[2,3,1],[3,1,1,1],[1,1,4],[4,2]
    int sumReq=6;                     //longest subarray with sumReq=6 is,[3,1,1,1],hence its length is 4
    int len=0;
    for(int i=0;i<n;i++){
       int sum=0; //initialising sum from 0 after every new i
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==sumReq){
            len=max(len,j-i+1);
        }
        }
        
    }
    cout<<len<<endl;

    //TC:O(n*n)
    //SC:O(1)
}
