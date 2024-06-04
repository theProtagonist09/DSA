//move all zeroes to the end of arr
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=8;
    int arr[n]={1,2,0,3,0,4,5,0};
    vector <int> v;    //taking a vector v,which stores all non zero elementns of arr

    for(int i=0;i<n;i++){
        if(arr[i]!=0){     //storing all non zero elements of arr in vector v
            v.push_back(arr[i]);
        }
    }
    for(int i=0;i<v.size();i++){
        arr[i]=v[i];     //storing all non zero elements in the start of arr
    }

    for(int i=v.size();i<n;i++){
        arr[i]=0;     //making remaining elements of arr =0;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //TC:O(n)+O(x)+O(n-x)=O(2n)
    //SC:O(x)
}