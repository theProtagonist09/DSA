/*Problem Statement: Given two sorted arrays arr1 and arr2 of size m and n
 respectively, return the median of the two sorted arrays. The median is
  defined as the middle value of a sorted list of numbers. In case the length
   of the list is even, the median is the average of the two middle elements.*/

#include<bits/stdc++.h>
using namespace std;

         double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n1=nums1.size();
        int n2=nums2.size();

        int i=0,j=0;

        int n=n1+n2;
        int idx1=n/2 , idx2=n/2-1;
        int el1, el2;
        int cnt=0;
        while(i<nums1.size()&& j<nums2.size()){
            if(nums1[i]<=nums2[j]){
               if(cnt==idx1){el1=nums1[i]; }
               if(cnt==idx2){el2=nums1[i]; }
               cnt++;
               i++;
            
            }else{
                if(cnt==idx1){el1=nums2[j]; }
               if(cnt==idx2){el2=nums2[j]; }
               cnt++;
               j++; 
            }
        }

        while(i<nums1.size()){
            if(cnt==idx1){el1=nums1[i]; }
               if(cnt==idx2){el2=nums1[i]; }
               cnt++;
               i++;
        }

        while(j<nums2.size()){
            if(cnt==idx1){el1=nums2[j]; }
               if(cnt==idx2){el2=nums2[j]; }
               cnt++;
               j++; 
        }

        if(n%2==0){
            return (double)(el1+el2)/2.0;
        }else{
            return el1;
        }
        return -1;
    }
   

int main(){
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};
    cout << "The median of two sorted array is " << fixed << setprecision(1)
         << findMedianSortedArrays(a, b) << '\n';

/*Time Complexity: O(n1+n2), where  n1 and n2 are the sizes of the given arrays.
Reason: We traverse through both arrays linearly.

Space Complexity: O(1), as we are not using any extra space to solve this problem.*/
}         