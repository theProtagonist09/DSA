//optimal soln for given a sorted array,remove duplicate elements and return the array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    int arr[n]={1,1,2,2,3,3,3};    //given sorted array
    
    int i=0;                    //first pointer i,starting from 0
    for(int j=1;j<n;j++){   // second pointer j starts from 1 and traverses arr.
        if(arr[i]!=arr[j]){
            i++;             //if value at both pointers are not equal,increment i
            arr[i]=arr[j];  //then change value of arr element at index i
        }
    }

    int k=i+1;        /*determining till how much index we need
                           to extract elements of arr*/
    for(int p=0;p<k;p++){
        cout<<arr[p]<<" ";

        // TC:O(N)
        // SC:O(1)
    }                       

                           
                        
}
