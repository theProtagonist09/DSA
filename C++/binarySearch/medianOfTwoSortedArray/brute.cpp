/*Problem Statement: Given two sorted arrays arr1 and arr2 of size m and n
 respectively, return the median of the two sorted arrays. The median is
  defined as the middle value of a sorted list of numbers. In case the length
   of the list is even, the median is the average of the two middle elements.*/

#include<bits/stdc++.h>
using namespace std;

 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> v;
        int i=0,j=0;
        while(i<nums1.size()&& j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                v.push_back(nums1[i]);
                i++;
            
            }else{
                v.push_back(nums2[j]);
                j++; 
            }
        }

        while(i<nums1.size()){
            v.push_back(nums1[i]);
            i++;
        }

        while(j<nums2.size()){
            v.push_back(nums2[j]);
             j++;
        }

        int n=v.size();

        if(n%2!=0){
            return v[(n+1)/2-1];
        }else{
            return (double)((double)v[(n)/2-1]+(double)v[(n)/2])/2.0;
        }
        return -1;
    }

int main(){
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};
    cout << "The median of two sorted array is " << fixed << setprecision(1)
         << findMedianSortedArrays(a, b) << '\n';

         /*Time Complexity: O(n1+n2), where  n1 and n2 are the sizes of the 
         given arrays.
Reason: We traverse through both arrays linearly.

Space Complexity: O(n1+n2), where  n1 and n2 are the sizes of the given arrays.
Reason: We are using an extra array of size (n1+n2) to solve this problem*/
}