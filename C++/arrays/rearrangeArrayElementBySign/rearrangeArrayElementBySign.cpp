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

    vector<int> pos; //for storing +ve elements in their resp order
    vector<int> neg; //for storing -ve elements in their resp order
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }else{
            neg.push_back(arr[i]); 
        }
    }

    for(int i=0;i<n/2;i++){
        arr[2*i]=pos[i];  //assigning ,+ve elements at even idx
        arr[2*i +1]=neg[i]; ////assigning ,-ve elements at odd idx
    }

    for(int i=0;i<n;i++){   //do not consider this is TC or SC,as this will be used to return arr
        cout<<arr[i]<<" ";
    }

    //TC: O(N)+O(N/2)
    //SC: O(N) for creating n new spaces
}