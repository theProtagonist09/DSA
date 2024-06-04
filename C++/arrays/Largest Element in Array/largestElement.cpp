#include<bits/stdc++.h>
using namespace std;

int main(){
    //finding largest element in an array by optimal solution
    int n=5;
    int arr[n]={1,5,112,9,-12};
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest<<" is the largest element";
}