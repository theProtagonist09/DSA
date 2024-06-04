//checking if a array is sorted in a ascending manner
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[n]={1,4,5,5,13,21};

    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            cout<<"Array is not sorted";
            return 0;
        }
    }

    cout<<"Array is sorted";
}