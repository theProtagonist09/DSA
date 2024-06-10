/*Problem Statement: You are given an array of ‘N’ integers.
 You need to find the length of the longest sequence which contains
  the consecutive elements.
  
  eg:
  Example 1:
Input:
 [100, 200, 1, 3, 2, 4]

Output:
 4

Explanation:
 The longest consecutive subsequence is 1, 2, 3, and 4.

Input:
 [3, 8, 5, 7, 6]

Output:
 4

Explanation:
 The longest consecutive subsequence is 5, 6, 7, and 8.*/

 #include<bits/stdc++.h>
 using namespace std;

 bool ls(int arr[],int n,int num){/*taking arr,it's size n and
   num as the number to be searched*/

    /* int n=sizeof(arr)/sizeof(arr[0]);  NOTE: it cannot be used,as here sizeof(arr)
     will give the size of pointer at arr[0] itself
     thus we have to pass size of array also in the parameter*/

    for(int i=0;i<n;i++){
      if(arr[i]==num){
        return true;
      }
    }
    return false;
 }
 
 int main(){
  int arr[]={102,4,100,1,101,3,2,1,1};
  int n=sizeof(arr)/sizeof(arr[0]);

  int len=1;

  for(int i=0;i<n;i++){
    int el=arr[i];
    int cnt=1;
    while(ls(arr,n,el+1)==true){ // ls==> linear search function,should be made by ourself
      cnt++;
      el++;
      len=max(len,cnt);
    }
  }

  cout<<len;
 }