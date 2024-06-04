//reversing array's specific continuous elements by a prebuilt function
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[n]={45,21,53,214,-25,126};

    reverse(arr+1,arr+5);    // reversing from 0th to 4th index  
    /*NOTE: reverse(arr+n,arr+m)
     we take elements from [n,m) index
     i.e elements from n to m-1 index*/

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}