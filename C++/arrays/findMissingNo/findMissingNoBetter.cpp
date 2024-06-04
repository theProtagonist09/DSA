/*u will be given a number n
and then n-1 no. will be given in an arr from 1 to n (without a specific no)
find that specific no.*/
/*eg: n=5
arr[4]={1,2,4,5}
missing no.=3*/

//Better soln

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n-1]={1,3,4,5};

    int hash[n+1]={0};//n+1,so that the last index of hash arr becomes n

    for(int i=0;i<n-1;i++){
        hash[arr[i]]++;  //incrementing at indexes value,which are present in arr
    }

    for(int i=1;i<n-1;i++){//iterating from 1,coz we only look for elements from 1 to n
        if(hash[i]==0){ //only the missing element idx value will be 0
            cout<<i<<endl;
        }
    }
    //TC:O(n+n)=O(2n)
    //SC:O(n) , due to hash arr
}