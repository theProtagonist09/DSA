/*Problem Statement: Given an array, print all the elements which are leaders.
A Leader is an element that is greater than all of the elements on its right
side in the array.

eg:
Input:

 arr = [10, 22, 12, 3, 0, 6]
Output:

 22 12 6
Explanation:

 6 is a leader. In addition to that, 12 is greater than all the elements
in its right side (3, 0, 6), also 22 is greater than 12, 3, 0, 6.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={10,22,12,3,0,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> v;

    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){//traversing from backwards
        if(arr[i]>maxi){//if element is bigger than maxi,then it will be leader
            v.push_back(arr[i]);
            maxi=arr[i];  //after obtaining a leader,set maxi equal to the value of leader
        }
    }

    for(auto it:v){
        cout<<it<<" ";
    }
}