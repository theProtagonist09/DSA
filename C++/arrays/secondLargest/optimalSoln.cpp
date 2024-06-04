#include<bits/stdc++.h>
using namespace std;

int main(){
    /*optimal solution*/
    int n=6;
    int arr[n]={12,-12,234,564,1209,56};
    int largest=arr[0],slargest=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }

    cout<<"Second largest element is "<<slargest;
}