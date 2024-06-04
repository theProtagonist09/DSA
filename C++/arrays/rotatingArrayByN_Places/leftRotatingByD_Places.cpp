//left rotating arr by d places
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;  
    int arr[n]={1,2,3,4,5,6};
    int d;   //places till which we need to left rotate
    cin>>d;
    d=d%n;   //eg. for n=6 arr will be same for 2,8,14... rotation

    int temp[d];        //forming a temp arr,storing first d elements of original arr

    for(int i=0;i<d;i++){
        temp[i]=arr[i];    //storing first d elements of arr in temp
    }

    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];    //lest shifitng elements of arr by d places
    }

    for(int i=0;i<d;i++){
        arr[(n-d)+i]=temp[i];   //storing first d elements of arr,in the end of it
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

        //TC:O(n+d)
        //SC:O(d)
    }
}