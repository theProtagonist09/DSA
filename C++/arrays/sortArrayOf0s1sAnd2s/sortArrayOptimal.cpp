//you are given an array of only 0's ,1's and 2's
//sort it

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=12;
    int arr[n]={0,1,2,0,1,2,1,2,0,0,0,1};

    //we will use DNF algo(Dutch National Flag)
    int low=0,mid=0,high=n-1;

    while(mid<=high){   //TC:O(N)
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{   //arr[mid]==2
        swap(arr[mid],arr[high]);
        high--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //TC:O(N)
    //SC:O(1)
}    