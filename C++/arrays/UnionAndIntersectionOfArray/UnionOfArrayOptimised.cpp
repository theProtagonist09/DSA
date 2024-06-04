//union of two arrays, optimised code
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr1[n]={1,2,33,44,55,61};
    int m=5;
    int arr2[m]={33,45,60,61,78};

    vector<int>unionArr;
    int i=0;    //pointer for first array arr1
    int j=0;    //pointer for second array arr2

    while(i<n && j<m){ //Both pointers should be less than their respective array sizes.
        if(arr1[i]<=arr2[j]){
            if(unionArr.size()==0 || unionArr.back()!=arr1[i]){ //checking if unionArr is empty or it includes same element previously
            unionArr.push_back(arr1[i]);
        }  
        i++; //incrementing i pointer in any case,only if arr1[i]<=arr2[j]
     }
        else{
            if(unionArr.size()==0 || unionArr.back()!=arr2[j]){//if arr1[i]>arr2[j] or if unionArr is empty
            unionArr.push_back(arr2[j]);
        }
        j++; //incrementing j pointer in any case,only if arr1[i]>arr2[j]
    }
}

while(i<n){ //if j pointer is exhausted
    if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
            unionArr.push_back(arr1[i]);
        }  
        i++;
}

while(j<m){  //if i pointer is exhausted
     if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
            unionArr.push_back(arr2[j]);
        }
        j++;
}  
  
  for(auto x:unionArr){
    cout<<x<<" ";       //SC:O(n+m)   NOTE: SC of O(n+m) is only due to returning the ans
  }

  //TC: O(n+m)
  //SC:O(n+m)   NOTE: SC of O(n+m) is only due to returning the ans
}