/* Given an array of N integers, your task is to find unique triplets that
 add up to give a sum of zero. In short, you need to return an array of all
  the unique triplets [arr[i], arr[j], arr[k]] such that i!=j, j!=k, k!=i, and
 their sum is equal to zero.*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(int n,vector <int> &arr){
    set<vector<int>>st;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int> v={arr[i],arr[j],arr[k]};
                    sort(v.begin(),v.end());
                    st.insert(v);
                }
            }
        }
    }
    vector<vector<int>> soln(st.begin(),st.end());  //remember this step
   
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

/*Time Complexity: O(N3 * log(no. of unique triplets)), where N = size of the array.
Reason: Here, we are mainly using 3 nested loops. And inserting
 triplets into the set takes O(log(no. of unique triplets)) time 
 complexity. But we are not considering the time complexity of sorting as
  we are just sorting 3 elements every time.

Space Complexity: O(2 * no. of the unique triplets) as we are using a set
 data structure and a list to store the triplets.*/
}