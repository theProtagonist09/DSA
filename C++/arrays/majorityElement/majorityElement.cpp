//give the element, whose freq of appearance in arr, is greater than n/2
/*i.e freq of element > n/2(also note: that there will exist only one majority  element,
if it exists at all)*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    int arr[n]={2,2,3,3,1,2,2};

    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                cnt++;
            }
        }
        if(cnt>n/2){
            cout<<arr[i]<<endl;
            break;
        }
    }

    //TC:O(N^2)
    //SC:O(1)
}    