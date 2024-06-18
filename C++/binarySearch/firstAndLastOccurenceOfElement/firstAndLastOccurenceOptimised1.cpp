/*Given a sorted array of N integers, write a program to find the index of the 
first and last occurrence of the target x.If the target is not 
found then return -1.*/


//using lower_bound & upper_bound algo
#include<bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> v,int x,int n){ 
    int ans=n;
    int low=0,high=n-1;
    while(low<=high){     //low_bound algo
        int mid=(low+high)/2;
        if(v[mid]>=x){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}

int lastOccurence(vector<int> v,int x,int n){ 
    int ans=n;
    int low=0,high=n-1;
    while(low<=high){     //low_bound algo
        int mid=(low+high)/2;
        if(v[mid]>x){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}

vector<int> ocurrences(vector<int> v,int x,int n){
     int lb=firstOccurence(v,x,n);
     if(lb==n || v[lb]!=x){ //if x is not found then our logic will not work
        return {-1,-1};
     }
     return { lb,lastOccurence(v,x,n)-1}; //this will only wokr when we found x
}

int main(){
    int n = 7;
  int x = 13;
  vector < int > v = {3,4,13,13,13,20,40};

  vector<int> ans= ocurrences(v,x,n);

  cout<<"First occurence is at "<< ans[0]<<" and last occurence at "<<ans[1];

  //TC:O(2*log(N))  log at base 2
  //SC:O(1)
}