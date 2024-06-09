/*There’s an array ‘A’ of size ‘N’ with an equal number of
positive and negative elements. Without altering the relative order of positive
and negative elements, you must return an array of alternately positive and negative
values.*/

/*eg:
Input:
arr[] = {1,2,-3,-1,-2,3}, N = 6
Output:
1 -3 2 -1 3 -2 */ 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,-3,-1,-2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans(n,0);   //n elements in arr, all init with 0 

    int pos=0;
    int neg=1;

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[neg]=arr[i];
            neg+=2;
        }else{
            ans[pos]=arr[i];
            pos+=2;
        }
    }

    for(auto it:ans){
        cout<<it<<" ";  //just for printing the ans, dont consider it's TC
    }

    //TC:O(N)
    //SC:O(N)
}