/*Problem Statement:
 You are given a read-only array of N integers with values also in the range 
 [1, N] both inclusive. Each integer appears exactly once except B which appears
  twice and A which is missing. The task is to find the repeating and missing numbers
   B and A where B repeats twice and A is missing.*/

#include<bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a,int n){
     vector<int> ans;
        int hash[n+1]={0};
        for(int i=0;i<n;i++){
            hash[a[i]]++;
        }
        
        int B=-1;
        int A=-1;
       
       int m=sizeof(hash)/sizeof(hash[0]);
       
       for(int j=1;j<m;j++){
           if(hash[j]==2){
               B=j; 
           }
           if(hash[j]==0){
               A=j;
           }
       }
       
        ans.push_back(B);
         ans.push_back(A);
         
         return ans;
}

int main(){
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    int n=a.size();
    vector<int> ans = findMissingRepeatingNumbers(a,n);
    cout << "The repeating and missing numbers are: {"
     << ans[0] << ", " << ans[1] <<"}"<<endl;

/*Time Complexity: O(2N), where N = the size of the given array.
Reason: We are using two loops each running for N times. So, the time 
complexity will be O(2N).

Space Complexity: O(N) as we are using a hash array to solve this problem.*/
}
