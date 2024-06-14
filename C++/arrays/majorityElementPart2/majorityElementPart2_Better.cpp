/* Given an array of N integers. Find the elements that appear more than
 N/3 times in the array. If no such element exists, return an empty vector.*/
#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector <int> &arr){
    int n=arr.size();

    map<int,int>mpp;
    vector<int> v;

    int mini=(n/3)+1;

    
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;

        if(mpp[arr[i]]==mini){
            v.push_back(arr[i]);
        }

        if(v.size()==2){
            break;
        }
    }

    return v;
}

int main(){
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans){
        cout << it << " ";
    }
   

 /*Time Complexity: O(N*logN), where N = size of the given array.
Reason: We are using a map data structure. Insertion in the map takes logN time.
 And we are doing it for N elements. So, it results in the first term O(N*logN).
If we use unordered_map instead, the first term will be O(N) for the best and 
average case and for the worst case, it will be O(N2).

Space Complexity: O(N) as we are using a map data structure. 
We are also using a list that stores a maximum of 2 elements.
 That space used is so small that it can be considered constant.*/
}    