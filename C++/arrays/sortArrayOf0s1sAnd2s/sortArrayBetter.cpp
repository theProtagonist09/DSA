//you are given an array of only 0's ,1's and 2's
//sort it

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=12;
    int arr[n]={0,1,2,0,1,2,1,2,0,0,0,1};

    int cut0=0; //keep track of total no of 0's in arr
    int cut1=0; //keep track of total no of 1's in arr
    int cut2=0; //keep track of total no of 2's in arr

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cut0++;
        }else if(arr[i]==1){
            cut1++;
        }else{
            cut2++;
        }
    }

    for(int i=0;i<cut0;i++){
        arr[i]=0;  //first set starting first cut0 elements as 0
    }

    for(int i=cut0;i<cut0+cut1;i++){
        arr[i]=1;  //then set ,cut1 elements as 1
    }

    for(int i=cut0+cut1;i<n;i++){
        arr[i]=2; //then set,cut2 elements as 2
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

        //TC:O(2N)
        //SC:O(1)
    }
}