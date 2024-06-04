/*given an array,return the indices of two element(they should be at distinct indices),
whose sum is equal to targeted value*/

//optimised soln(without using map data structure)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n]={2,6,5,8,11};
    int sumReq=13;

    vector <pair<int,int>> arrWithIndices;
    for(int i=0;i<n;i++){
        arrWithIndices.push_back({arr[i],i});//so that element are intacted with their original index
    }

    sort(arrWithIndices.begin(),arrWithIndices.end());  //for sorting the vector  TC:O(nlogn)

    int i=0;  //first pointer,starting from 0th index
    int j=n-1; //second pointer,starting from n-1 th index

    while(i<j){    //TC:O(n)
        if(arrWithIndices[i].first + arrWithIndices[j].first<sumReq){
            i++;  /*as it is sorted array,so to make sum of elements equal to sumReq,
            we should increase i,thus sum of elements will increase*/
        }else if(arrWithIndices[i].first + arrWithIndices[j].first>sumReq){
            j--;/*as it is sorted array,so to make sum of elements equal to sumReq,
            we should decrease j,thus sum of elements will decrease*/
        }else{
            cout<<arrWithIndices[i].second<<" "<<arrWithIndices[j].second<<endl;
            i++;   //incrementing i and decrementing j, so to handle case of multiple pairs
            j--;
        }
    }

    //TC:O(n)+O(nlogn)  , O(n) for traversing vector in while loop,O(nlogn) for sorting the vector
    //SC:O(n)  ,for using n space ,to create the vector arrWithIndices  

    //refer striver lec ,snd its notes

}