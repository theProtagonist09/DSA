#include<bits/stdc++.h>
using namespace std;
// avg and worst case time complexity is O(n^2)
// best case time complexity is O(n)
void insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
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

    cout<<"After insertion sort"<<endl;
    insertion_sort(arr,n);
}