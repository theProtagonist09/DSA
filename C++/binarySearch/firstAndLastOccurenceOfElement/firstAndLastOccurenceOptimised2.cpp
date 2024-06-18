/*Given a sorted array of N integers, write a program to find the index of the 
first and last occurrence of the target x.If the target is not 
found then return -1.*/

//using raw binary search,without using lower_bound and upper_bound

#include<bits/stdc++.h>
using namespace std;

firstOccurence(vector<int> v,int x,int n){
    int ans=-1;
    int low=0,high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(v[mid]==x){
            ans=mid;
            high=mid-1;
        }else if(v[mid]>x){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}

lastOccurence(vector<int> v,int x,int n){
    int ans=-1;
    int low=0,high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(v[mid]==x){
            ans=mid;
            low=mid+1;
        }else if(v[mid]>x){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}

 vector<int> ocurrences(vector<int> v,int x,int n){
     int first=firstOccurence(v,x,n);
     if(first==-1){return {-1,-1}; }  //if first==-1 , i.e. element wasn't found

     int last=lastOccurence(v,x,n);
     
     return { first,last};
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