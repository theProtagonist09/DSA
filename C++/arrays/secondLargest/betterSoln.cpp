#include<bits/stdc++.h>
using namespace std;

int main(){
    /*finding second largest element by first determining largest
    then determining the second largest element
    TC : O(N+N)=O(2N)=O(N)*/

    int n=6;
    int arr[n]={12,5,34,23,100,-12};
    int largest=arr[0];
    int slargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i];
        }
    }

    cout<<"Second largest element is "<<slargest;
}