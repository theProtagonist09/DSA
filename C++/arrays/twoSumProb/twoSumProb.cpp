/*given an array,return the indices of two element(they should be at distinct indices),
whose sum is equal to targeted value*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n]={2,5,6,8,11};
    int sumReq=13;

    for(int i=0;i<n-1;i++){ //first pointer traversing from 0 to n-2 index
        for(int j=i+1;j<n;j++){//second pointer traversing from i+1 to n-1 index
                               //two pointers with different range to traverse,so they dont point to same index
            if(arr[i]+arr[j]==sumReq){
                cout<<i<<" "<<j<<endl;
            }                  

        }
    }
    //TC:O(n*n)
    //SC:O(1)
}