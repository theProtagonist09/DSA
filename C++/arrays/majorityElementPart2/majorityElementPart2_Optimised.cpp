/* Given an array of N integers. Find the elements that appear more than
 N/3 times in the array. If no such element exists, return an empty vector.*/
#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &arr){
    int n=arr.size();
    int cnt1=0,cnt2=0;
    int el1=INT_MIN,el2=INT_MIN; 
    /*please init with  INT_MIN, to avoid pushing duplicate element into vector v*/

    vector<int> v;

    for(int i=0;i<n;i++){
        if(cnt1==0 && arr[i]!=el2){ //slight modification of moore's voting algo
            el1=arr[i];
            cnt1=1;
        }else if(cnt2==0 && arr[i]!=el1){//slight modification of moore's voting algo
            el2=arr[i];
            cnt2=1;
        }else if(arr[i]==el1){
            cnt1++;
        }else if(arr[i]==el2){
            cnt2++;
        }else{
            cnt1--;
            cnt2--;
        }
    }

     cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){  //checking if el1 and el2 are majority or not
        if(arr[i]==el1){
            cnt1++;
        }
        if(arr[i]==el2){
            cnt2++;
        }
    }

    if(cnt1>n/3){
        v.push_back(el1);
    }
    if(cnt2>n/3){
        v.push_back(el2);
    }

    return v;
}

int main(){
     vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
    cout << it << " ";

/*Time Complexity: O(N) + O(N), where N = size of the given array.
Reason: The first O(N) is to calculate the counts and find the expected
majority elements. The second one is to check if the calculated elements
are the majority ones or not.

Space Complexity: O(1) as we are only using a list that stores a maximum
 of 2 elements. The space used is so small that it can be considered constant.*/
} 