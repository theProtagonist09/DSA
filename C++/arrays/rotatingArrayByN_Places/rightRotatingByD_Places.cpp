//right rotating array by d places
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    int d;
    cin>>d;    //right rotating ar by d places
    d=d%n;
    reverse(arr,arr+(n-d));  //reversing first n-d elements
    reverse(arr+(n-d),arr+n); //reversing first d elements
    reverse(arr,arr+n);    //reversing whole arr to get required arr
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}