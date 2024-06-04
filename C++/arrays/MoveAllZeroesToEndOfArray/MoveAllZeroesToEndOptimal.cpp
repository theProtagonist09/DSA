//move all zeroes to end by optimal approach
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    int arr[n]={1,0,2,3,2,0,0,4,5,1};

    int j=-1;    //assing j as index=-1, 1st pointer
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i; //searching for first element to be 0 and then assigning its idx to j
            break; //if there's no zero in arr,then j will be -1 and we stop
        }
    }

    for(int i=j+1;i<n;i++){ //initialising 2nd pointer i adjacent to pointer j
        if(arr[i]!=0){
            swap(arr[j],arr[i]);   //swap elements at idx j and i,if arr[i] is non zero
            j++; //increment pointer j
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // TC:O(x)+O(n-x)=O(n)
    //SC:O(1)
}