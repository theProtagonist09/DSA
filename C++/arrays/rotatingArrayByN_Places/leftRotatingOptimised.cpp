//optimised code for left rotating arr by d places

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[n]={11,42,63,-84,75,46};

    int d;    //places till which we need to left rotate
    cin>>d;
    d=d%n;   //eg. for n=6 arr will be same for 2,8,14... rotation

    reverse(arr,arr+d);   //reverse first d elements, i.e. from index 0 to d-1
    reverse(arr+d,arr+n);  //reverse remaining elements, i.e from index d to n-1

    reverse(arr,arr+n);   //finally reversing the whole arr to get required arr

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //TC:O(2n)
    //SC:O(1)
}