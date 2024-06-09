/* There might be more than one subarray with the maximum sum. 
We need to print any of them.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
     int arr[]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int maxi=INT_MIN;
    int sum=0;
    int ansStart=-1,ansEnd=-1;
    int start=0;

    for(int i=0;i<n;i++){  
        if(sum==0){
            start=i;
        }

        sum+=arr[i];    // original form of kadane's algo

        if(sum>maxi){  //  original form of kadane's algo
            maxi=sum;  //  original form of kadane's algo

            ansStart=start;
            ansEnd=i;
        }

        if(sum<0){  //  original form of kadane's algo
            sum=0;  //  original form of kadane's algo
        }
    }

    cout<<"Max sum subarray is : [ ";
    for(int i=ansStart;i<=ansEnd;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";

     //TC:O(N)
    //SC:O(1)
}