/* Given an array of N integers, your task is to find unique triplets that
 add up to give a sum of zero. In short, you need to return an array of all
  the unique triplets [arr[i], arr[j], arr[k]] such that i!=j, j!=k, k!=i, and
 their sum is equal to zero.*/

 #include<bits/stdc++.h>
 using namespace std;
 
vector<vector<int>> triplet(int n,vector<int> &arr){
    vector<vector<int>> soln;

    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        int j=i+1;
        int k=n-1;

        while(j<k){
        int sum=arr[i]+arr[j]+arr[k];
        
        if(sum<0){
            j++;
        }else if(sum>0){
            k--;
        }else{
            vector<int> temp={arr[i],arr[j],arr[k]};
            soln.push_back(temp);
            j++;
            k--;
            //skip the duplicates:
            while(j<k && arr[j]==arr[j-1]){j++;}
            while(j<k && arr[k]==arr[k+1]){k--;}
        }
        }
        
    }
    return soln;
}

 int main(){
    vector<int> arr = { -1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> ans = triplet(n, arr);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    /*Time Complexity: O(NlogN)+O(N2), where N = size of the array.
Reason: The pointer i, is running for approximately N times. And both 
the pointers j and k combined can run for approximately N times including 
the operation of skipping duplicates. So the total time complexity will be O(N2). 

Space Complexity: O(no. of unique triplets), This space is only used to store the
 answer. We are not using any extra space to solve this problem. So, from that 
 perspective, space complexity can be written as O(1).*/
 }