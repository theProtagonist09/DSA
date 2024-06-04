//search a given num in arr,a nd return the idx of its first occurence
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int arr[n]={1,3,5,46,78,46};

    int num=46;  //num to be searched in arr

    for(int i=0;i<n;i++){
        if(arr[i]==num){
            cout<<"num found at idx "<<i;
            return i; /*if num is found,return idx i,it will terminate the program immediately.
         Then lower cout statement will not be executed as program will be terminated*/
        }
    }
    cout<<"Number not found";
    return -1;   //if num not found,return -1,it will terminate the program
}