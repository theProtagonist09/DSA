/*Problem Statement: Given an integer array arr of size N, sorted in ascending order 
(may contain duplicate values) and a target value k.
 Now the array is rotated at some pivot point unknown to you. Return True 
 if k is present and otherwise, return False. 
*/

/*NOTE: for duplicates, always try to code for unique elements and then take care
 to cases,where duplicate elements will become problematic*/

 
#include<bits/stdc++.h>
using namespace std;

bool search(vector <int> arr,int n,int k){
    int low=0,high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==k){
            return true;

        }
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){ /*only this is new code,
        to handle duplicates*/
        /*other code is similar to the code of unique element case*/
            low++;
            high--;
            continue;
        }

        if(arr[low]<=arr[mid]){  //if left half is sorted
          if(arr[low]<=k && k<=arr[mid]){//check if k is present in sorted portion
            high=mid-1;

          }else{
            low=mid+1;  //k is present in unsorted portion
          }
        }else{   //if left half isn't sorted, i.e right half is sorted
          if(arr[mid]<=k && k<=arr[high]){ //check if k is present in sorted portion
            low=mid+1;
          }else{
            high=mid-1;
          }
        }
    }
    return false;
}

int main(){
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9, k = 1;
    bool ans = search(arr, n, k);
    if (ans==false)
        cout << "Target is not present.\n";
    else
        cout << "Target is present." "\n";

    /*Time Complexity: O(logN) for the best and average case. O(N/2) for the worst case.
     Here, N = size of the given array.
Reason: In the best and average scenarios, the binary search algorithm is primarily
 utilized and hence the time complexity is O(logN). However, in the worst-case scenario,
  where all array elements are the same but not the target 
  (e.g., given array = {3, 3, 3, 3, 3, 3, 3}), we continue to reduce the search space 
  by adjusting the low and high pointers until they intersect. This worst-case
   situation incurs a time complexity of O(N/2).

Space Complexity: O(1)
Reason: We have not used any extra data structures, this makes space
 complexity, even in the worst case as O(1).*/
}    