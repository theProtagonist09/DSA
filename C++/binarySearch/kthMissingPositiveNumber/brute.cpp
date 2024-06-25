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
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                k++;
            }else{
                break;  //if arr[i]>k, break ,as this is the value of k needed
            }
        }
        return k;
    }
  
  int main(){
     vector<int> vec = {4, 7, 9, 10};
    int k = 4;
    int ans = findKthPositive(vec, k);
    cout << "The missing number is: " << ans << "\n";
    return 0;

    //TC:O(N)
    //SC:O(1)
  }