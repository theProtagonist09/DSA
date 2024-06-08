//given an arr,return the max sum,of a subarray

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

             int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
             maxi=max(maxi,sum);
        }
    }

    cout<<"Max sum of subarray is "<<maxi;
    //TC:O(N^3)
    //SC:O(1)
}