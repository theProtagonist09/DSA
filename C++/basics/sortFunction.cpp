//to sort an array,there is a function
//sort(arr,arr+n)  this will sort the array from 0 th index to n-1 index

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    int arr[n]={1,3,6,2,7,9,-12};
    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}