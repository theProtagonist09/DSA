/*Problem Statement: Given an array Arr[] of integers, rearrange the numbers of the
 given array into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange to the lowest
 possible order (i.e., sorted in ascending order).*/

 /*Input format:
 Arr[] = {1,3,2}
Output
: Arr[] = {2,1,3}
Explanation: 
All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1}
 , {3,1,2} , {3,2,1}}. So, the next permutation just after {1,3,2} is {2,1,3}.*/

 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
    int arr[]={1,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    int idx=-1;

    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            idx=i;
            break;
        }
    }

    if(idx==-1){
        reverse(arr,arr+n);
    }else{
        int target=-1;
        for(int i=n-1;i>=0;i--){
            if(arr[idx]<arr[i]){
                target=i;
                break;
            }
        }
        swap(arr[idx],arr[target]);
        reverse(arr+idx+1,arr+n);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }