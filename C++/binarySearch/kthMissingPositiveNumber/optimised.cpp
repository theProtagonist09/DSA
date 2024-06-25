/*Problem Statement: You are given a strictly increasing array ‘vec’ and a
 positive integer 'k'. Find the 'kth' positive integer missing from 'vec'.
 
 eg:Input Format:
 vec[]={4,7,9,10}, k = 4
Result:
 5
Explanation:
 The missing numbers are 1, 2, 3, 5, 6, 8, 11, 12, ……, and so on. Since 'k'
  is 4, the fourth missing element is 5.*/

  #include<bits/stdc++.h>
  using namespace std;

  int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int missing=arr[mid]-(mid+1);  //missing no. till idx mid
            if(missing<k){ //if missing no is less than k,simply look at the right half
                low=mid+1;
            }else{ //if missing no. is greater than or equal to k, look in the left half
                high=mid-1; 
            }
        }
        /*eventually, low and high will go into opp. polarity, and our ans will become
         arr[high]+more.
         more=k-missing
         missing=arr[high]-(high+1) NOTE:in the end,when opp polarity happens,mid and
         high will point to the same idx, thus missing=arr[high]-(high+1)
         
         thus arr[high]+more == arr[high]+k -(arr[high]-high-1)
          which boils down to : high+k+1*/

        return high+k+1;

    }
  
  int main(){
     vector<int> vec = {4, 7, 9, 10};
    int k = 4;
    int ans = findKthPositive(vec, k);
    cout << "The missing number is: " << ans << "\n";
    return 0;

    /*Time Complexity: O(logN), N = size of the given array.
Reason: We are using the simple binary search algorithm.

Space Complexity: O(1) as we are not using any extra space to solve this problem.*/
  }