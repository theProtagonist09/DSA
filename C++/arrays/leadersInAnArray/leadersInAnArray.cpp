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
    for(int i=0;i<n;i++){
        int el=arr[i];   //taking one element at a time
        int flag=0;
        for(int j=i+1;j<n;j++){ //checking if elements of its left are smaller than it
            if(el<arr[j]){
                flag++; //raising flag,i.e chosen element is not a leader  
                break; /*as no need to run this loop further,
                 once a given element is proved not to be a leader*/
            }
        }
        if(flag==0){ //if flag is not raised,then only element is a leader
            v.push_back(el);
        }
    }

    for(auto it:v){
        cout<<it<<" ";
    }

    /*Time Complexity: O(N^2) { Since there are nested loops being used,
     at the worst case n^2 time would be consumed }.

Space Complexity: O(N) { There is no extra space being used in this approach.
 But, a O(N) of space for vector v will be used in the worst case }.*/
}
