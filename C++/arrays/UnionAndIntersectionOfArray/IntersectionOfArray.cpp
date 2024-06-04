//take intersection of two sorted arrays(in intersection,duplicate elements are allowed)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr1[n]={1,2,3,4,4,6};
    int m=5;
    int arr2[m]={2,4,5,6,7};
    int vis[m]={0};   //visited array, keeps track of the element selected from arr2

    vector <int> ans;      //stores the intersection of elements of both array

    for(int i=0;i<n;i++){ //iterating thru both,checking if arr1 element ,mathces with arr2 elements
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j] && vis[j]==0){ //vis[j]==0,means the element of j idx in arr2 isn't visited
                ans.push_back(arr1[i]);
                vis[j]=1;  //if one element of arr2 is succesfully visited,then in vis array its value will be updated as 1
                break;
            }
            if(arr1[i]<arr2[j]){ /*coz if arr2 ka element ek dafa bada hogya,then kabhi bhi arr1[i]=arr2[j] nahi hoga,as both are sorted arrays*/
                break;
            }
        }
    }

    for(auto x:ans){
        cout<<x<<" ";
    }
    //TC:O(n*m)
    //SC:O(m);
}