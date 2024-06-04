//take intersection of two sorted arrays(in intersection,duplicate elements are allowed)
//optimised approach

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr1[n]={1,2,3,4,4,6};
    int m=5;
    int arr2[m]={2,4,5,6,7};
    vector<int> ans; //for storing intersection

    int i=0; //first pointer for arr1
    int j=0; //second pointer for arr2

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
           i++;  //as for sorted arrays,if arr1[i]<arr2[j] ,then no need to compare with iniitial pointer i,increment it
        
        }else if(arr1[i]>arr2[j]){
            j++ ; //as for sorted arrays,if arr1[i]>arr2[j] ,then no need to compare with iniitial pointer j,increment it
        }else{ //iff arr1[i]==arr2[j]
        ans.push_back(arr1[i]);
        i++;
        j++;  //increment both
        }
    }

    for(auto x:ans){
        cout<<x<<" ";
    }
    //TC:O(n+m)
    //SC:O(1)  bcoz we r not using any extra space
}
