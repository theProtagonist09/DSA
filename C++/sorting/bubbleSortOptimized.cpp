#include<bits/stdc++.h>
using namespace std;
// best case time complexity for bubblesort is O(n)
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int didSwap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                int didSwap=1;  //if swapping happens,then didSwap gets updated to 1
            }
        }
        if(didSwap==0){
            break;     /*if swapping doesn't happens for the first time,
                         then arr is sorted. thus breaks out of the outer loop*/
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"After bubble sort: "<<endl;
    bubble_sort(arr,n);
}