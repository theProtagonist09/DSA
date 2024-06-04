//given a sorted array,remove duplicate elements and return the array by Brute force
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[n]={2,33,33,41,55,55};     //given sorted array
    set <int> st;                      //declaring a set st of integer data type

    for(int i=0;i<n;i++){
        st.insert(arr[i]);           //inserting all elements of arr into st
    }

    int k=st.size();     /*determining till how much index we need
                           to extract elements of arr*/

    int j=0;

    for(int x:st){    // x will iterate through the set st,giving element at index x
        arr[j]=x;     // Modify arr elements from index 0 using all elements of set st.
        j++;
    }

    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }


    //TC: O(NlogN + N)
    //SC : O(N)
}