/*Given a sorted array of N integers, write a program to find the index of the 
first and last occurrence of the target key.If the target is not 
found then return -1.*/

 #include<bits/stdc++.h>
 using namespace std;

 vector<int> solve(int n,int key,vector<int> v){
    int first=-1,last=-1;

    for(int i=0;i<n;i++){
        if(v[i]==key){
            if(first==-1){ //if detecting key for the first time,then update var first
                first=i;
            }
            last=i;//update last,every time,key is detected
        }
    }

    return {first,last};
 }
 
 int main(){
    int n = 7;
  int key = 13;
  vector < int > v = {3,4,13,13,13,20,40};
   
  // returning the first and last occurrence index if the element is present
  // otherwise -1
  vector<int> ans=solve(n,key,v);

  for(auto it:ans){
    cout<<it<<" ";
  }
  //TC:O(N)
  //SC:O(1)
 }