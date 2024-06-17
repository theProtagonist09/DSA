/*Problem Statement: Given an array of integers and an integer k, return the total
 number of subarrays whose sum equals k.*/

#include<bits/stdc++.h>
using namespace std;

int findAllSubarraysWithGivenSum(vector <int> & arr,int k){
    int n= arr.size();
    int cnt=0;
    map<int,int>mpp;
//not full code

}

int main(){
    vector <int> arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The number of subarrays is: " << cnt ;
}