/*Problem statement: You are given a sorted array of integers and a target,
 your task is to search for the target in the given array. Assume the given
  array does not contain any duplicate numbers.*/

  #include<bits/stdc++.h>
  using namespace std;

  int binarySearch(vector<int> a,int low,int high,int target){
    if(low>high){
        return -1;
    }

    int mid=(low+high)/2;

    if(a[mid]==target){
        return mid;
    }else if(target>a[mid]){
        return binarySearch(a,mid+1,high,target);
    }else{
        return binarySearch(a,low,mid-1,target);
    }
  }

  int search(vector<int>a,int target){
    return binarySearch(a,0,a.size()-1,target);
  }
  
  int main(){
    
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = search(a, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "<< ind << endl;
    //TC:O(log(N)) at the base 2
    //SC: O(1)

    //binary search is only used in sorted space
}