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
 
 int main(){
    int arr[]={102,4,100,1,101,3,2,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);  //sorting the arr

    int lastMin=INT_MIN;
    int len=1;
    int cnt=0;

    for(int i=0;i<n;i++){
        
        if(arr[i]==lastMin+1){  //i.e. arr[i] is part of consecutive seq
        cnt++;
        lastMin=arr[i];
        }else if(arr[i]!=lastMin){
            cnt=1;
            lastMin=arr[i];
        }
        len=max(len,cnt);
    }

    cout<<len;
    /*Time Complexity: O(NlogN) + O(N), N = size of the given array.
Reason: O(NlogN) for sorting the array. To find the longest sequence,
 we are using a loop that results in O(N).

Space Complexity: O(1), as we are not using any extra space to solve this problem.*/

 }