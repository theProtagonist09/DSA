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
    
    int xorAll=0;  //for xor of all no from 1 to n.  NOTE: dont use xor as variable name
    int xorArr=0; //for xor of all elements in arr
    for(int i=0;i<n-1;i++){
        xorAll=xorAll^(i+1);  // 1^2^3^4
        xorArr=xorArr^arr[i];    // 1^2^4^5
    }

    xorAll=xorAll^n;     // 1^2^3^4^5
    cout<<(xorAll^xorArr);  //  (1^2^3^4^5)^(1^2^4^5) = 3 , since a^a=0

   //TC:O(n);
//    SC:O(1);

/*This is more feasible solution,than optimised solution 1
 as xor of numbers always yield number less than or equal to the max no.
 thus int data type can be used always*/
}
