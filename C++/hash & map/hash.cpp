#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,6,6,10};
    int hash[12]={0};    //setting all element to 0
    
    for(int i=0;i<5;i++){
        hash[arr[i]] ++;
    }

    int t; //no of queries
    cin >>t;
    while(t-->0){
        int n;    // number in array arr,whose frequency is needed
        cin >>n;  
        cout <<"freq. of: "<<n<<" in arr is "<<hash[n]<<endl;
    }
}