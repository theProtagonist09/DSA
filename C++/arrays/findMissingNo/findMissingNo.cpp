/*u will be given a number n
and then n-1 no. will be given in an arr from 1 to n (without a specific no)
find that specific no.*/
/*eg: n=5
arr[4]={1,2,4,5}
missing no.=3*/

//Brute force soln

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n-1]={1,3,4,5};

    for(int i=1;i<=n;i++){ //to iterate from 1 to n
        int flag=0;  //flag to check if number is present in arr 
        for(int j=0;j<n-1;j++){ // to iterate in arr
            if(arr[j]==i){
                flag=1;  //if number is found, flag is raised to 1
                break;  //then by break, it came out of the immediate for loop
            }
        }
        if(flag==0){  //if no. is found,then this if block will not be executed
            cout<<i;  //only for the missing no, flag will remain 0
        }
    }
    //TC:O(N*N)
    //SC:O(1)
}