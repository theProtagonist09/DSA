//reversing array without using in-built function
#include<bits/stdc++.h>
using namespace std;

void revArray(int array[],int start,int end){
    int temp;
    end--;        // Adjust end to make the range [start, end)
    while(start<=end){
        temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int n=5;
    int arr[n]={1,45,43,21,66};
    revArray(arr,1,4);    //reverses from  [1,4) index
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}