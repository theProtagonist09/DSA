//count max consecutive ones in arr,and return the number

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=8;
    int arr[n]={1,1,1,0,1,1,2,1};

    int count=0; //counter to keep track of consecutive 1's in arr
    int maxi=0; //gives the ans

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }else{
            count=0;
        }
        maxi=max(count,maxi);
    }
    cout<<maxi<<endl;
    //TC:O(n);
    //SC:O(1);
}