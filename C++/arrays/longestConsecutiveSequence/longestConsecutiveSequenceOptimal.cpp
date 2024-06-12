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

    int len=1;
    int cnt=0;

    unordered_set <int> st;

    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    for(auto it:st){
        if(st.find(it-1)==st.end()){//i.e. it-1 wasn't found
        cnt=1;
        int x=it+1;
        while(st.find(x)!=st.end()){//i.e x was found
        cnt++;
        x++;
        }
        len=max(len,cnt);
       }
    }

    cout<<len;

    /*Time Complexity: O(N) + O(2*N) ~ O(3*N), where N = size of the array.
Reason: O(N) for putting all the elements into the set data structure. 
After that for every starting element, we are finding the consecutive elements.
 Though we are using nested loops, the set will be traversed at most twice in the
  worst case. So, the time complexity is O(2*N) instead of O(N2).

Space Complexity: O(N), as we are using the set data structure to solve this problem.

Note: The time complexity is computed under the assumption that we are using
 unordered_set and it is taking O(1) for the set operations. 

If we consider the worst case the set operations will take O(N) in
 that case and the total time complexity will be approximately O(N2). 
And if we use the set instead of unordered_set, the time complexity
 for the set operations will be O(logN) and the total time complexity
  will be O(NlogN).*/
}    