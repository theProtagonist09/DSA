//left rotating arr by 1 place
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n]={1,3,2,8,12};     //given array

    int temp=arr[0];     //storing arr[0] in temp

    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];    //left shifting array by one place from index 1
    }

    arr[n-1]=temp;     //putting last element value as temp i.e arr[0]

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //TC:O(N)
    //SC:O(1)
}