/*given an array,return the indices of two element(they should be at distinct indices),
whose sum is equal to targeted value*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v={1,4,2,3,5,5};
    int n=v.size();
    int sumReq=7;

    map <int,int> mpp;
    for(int i=0;i<n;i++){
        int a=v[i];
        int remaining=sumReq-a;

        if(mpp.find(remaining) != mpp.end()){
            cout<<mpp[remaining]<<" "<< i<<endl; //prints index of both element
        }else{
            mpp[a]=i; //to store : key and value in map(element and its index respectively)
        }
    }

    //refer this to striver lec and its notes

    //TC:O(nlogn)
    //SC:O(n)

}