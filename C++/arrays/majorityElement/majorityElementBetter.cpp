//give the element, whose freq of appearance in arr, is greater than n/2
/*i.e freq of element > n/2(also note: that there will exist only one majority element,
if it exists at all)*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    int arr[n]={2,2,3,3,1,2,2};

    map<int ,int> mpp;   //using map

    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(mpp[arr[i]] > (n/2)){
            cout<<arr[i]<<endl;
            break;
        }
    }

    //TC: O(nlogn)+O(n)
    //SC:O(n)
    
}