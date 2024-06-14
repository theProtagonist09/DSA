/* Given an array of N integers. Find the elements that appear more than
 N/3 times in the array. If no such element exists, return an empty vector.*/
#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector <int> & arr){
    int n=arr.size();
    vector<int> ls;

    for(int i=0;i<n;i++){
        int cnt=0;
       if(ls.size()==0|| ls[0]!=arr[i]){/*coz,there will be at most two majority element
       appearing more than n/3 times*/
       for(int j=0;j<n;j++){
        if(arr[j]==arr[i]){
            cnt++;
        }
       }
       if(cnt>n/3){
        ls.push_back(arr[i]);
       }
       }
       if(ls.size()==2){
        break;
       }
    }
    return ls;
}

int main(){
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";

/*Time Complexity: O(N2), where N = size of the given array.
Reason: For every element of the array the inner loop runs for N times.
 And there are N elements in the array. So, the total time complexity is O(N2).

Space Complexity: O(1) as we are using a list that stores a maximum of 2 
elements. The space used is so small that it can be considered constant.*/
}