//given an arr,return the max sum,of a subarray

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=sizeof(arr)/sizeof(arr[0]);

    //kadane's algo

    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        
        if(sum>maxi){
            maxi=sum;
        }

        if(sum<0){
            sum=0;
        }
    }

    if(maxi<0){
        maxi=0;  /*just in case,max subarray sum comes out to be -ve,we will consider
                 empty subarray,and give maxi =0*/
    }

    cout<<maxi<<endl;

    //TC:O(N)
    //SC:O(1)
}    