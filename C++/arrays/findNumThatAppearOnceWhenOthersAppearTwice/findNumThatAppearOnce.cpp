//find num that appear once,while other appear twice
//brute force
#include<bits/stdc++.h>
using namespace std;

int singleElement(vector <int> &arr){ //&arr ensure we pass by reference. i.e Any modifications to arr inside the function will affect the original vector.
    int n=arr.size();

    for(int i=0;i<n;i++){
        int num=arr[i];  //selecting a particular element one by one
        int cnt=0;

        for(int j=0;j<n;j++){
            if(num==arr[j]){
            cnt++;
            }
        }
        if(cnt==1){
            return num;
        }
    }
    return -1;   //this will only be executed,if arr doesn't contain a single element
}

int main(){

    vector <int> arr={4,1,2,1,2};
    int ans= singleElement(arr);
    cout<<"Single Element is "<<ans<<endl;
}