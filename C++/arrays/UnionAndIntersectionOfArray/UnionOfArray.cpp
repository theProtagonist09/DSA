/*given two Sorted Arrays(may contain duplicate elements)
return array of union of them in sorted way(and without duplicates)*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr1[n]={1,2,4,4,5,6};   //arr1 
    int m=5;
    int arr2[m]={3,4,6,7,7};     //arr2

    set<int>st;     //set,which stores unique elements in sorted way
    //don't use "union",as it is a keyword in c++

    for(int i=0;i<n;i++){
        st.insert(arr1[i]);   //putting elements of arr1 in st
    }                         //TC:O(  nlog(st.size())  )

     for(int i=0;i<m;i++){
        st.insert(arr2[i]);   //putting elements of arr2 in st
    }                         //TC:O(  mlog(st.size())  )

    int unionArr[st.size()];   //making arr of union,with size equal to of set st

    int j=0;           //idx of unionArr,initialising with 0
    //NOTE:we can use here int i also,it will not affect other loops  
    for(auto x:st){
        unionArr[j]=x;   //storing all elements of st into unionArr;
        j++;             //TC:O(n+m)
    }
    
    for(int i=0;i<st.size();i++){
        cout<<unionArr[i]<<" ";
    }

    //TC:O( nlog(st.size()) ) + O( mlog(st.size()) ) + O(n+m)
    //SC:O(n+m) + O(n+m)     NOTE:second term in SC is used to return the answer
}