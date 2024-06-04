/*u will be given a number n
and then n-1 no. will be given in an arr from 1 to n (without a specific no)
find that specific no.*/
/*eg: n=5
arr[4]={1,2,4,5}
missing no.=3*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n-1]={1,2,4,5};
    
    int sum=n*(n+1)/2;   //it works,but for integers like 10^5 etc...n^2=10^10 ,int cannot be used
    int sum1=0;
    for(int i=0;i<n-1;i++){
        sum1+=arr[i];
    }
   
   cout<<sum-sum1;
   //TC:O(n);
//    SC:O(1);
}

