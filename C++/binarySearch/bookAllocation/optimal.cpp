/*Problem Statement: Given an array ‘arr of integer numbers,
 ‘ar[i]’ represents the number of pages in the ‘i-th’ book. 
 There are a ‘m’ number of students, and the task is to allocate
  all the books to the students.
Allocate books in such a way that:

Each student gets at least one book.
Each book should be allocated to only one student.
Book allocation should be in a contiguous manner.
You have to allocate the book to ‘m’ students such that the
 maximum number of pages assigned to a student is minimum. 
 If the allocation of books is not possible. return -1
 
 NOTE: similar to these prob are, painter's partition and split array-largest sum prob*/

#include<bits/stdc++.h>
using namespace std;

int func(vector<int>& arr, int n,int pages){
    int stu=1,stuPages=0;  // intially,first stu, and he has no books in hand
    for(int i=0;i<n;i++){
        if(stuPages+arr[i]<=pages){ 
            /* if stu can handle book containing arr[i] pages, without exceeding
             limit of pages,simply handle him the book*/
            stuPages+=arr[i];
        }else{ //else give it to next stu
        stu++;
        stuPages=arr[i];
        }
    }
    return stu;
}

int findPages(vector<int>& arr, int n, int m) {

    if(m>n){  // if more stu are there than books, not each can get one book atleast
        return -1;
    }
    // Write your code here.

    //search range
    int low=*max_element(arr.begin(),arr.end());  
    int high=accumulate(arr.begin(),arr.end(),0);

    //searching for maximum no. of pages assigned to be mini
   while(low<=high){
       int mid=(low+high)/2;

       int cntStu=func(arr,n,mid);
       if(cntStu<=m){ // if mid no. of pages, is valid,  look for left half
           high=mid-1;
       }else{
           low=mid+1;  // if mid no. of pages, cannot be the soln,move to right half
       }
   }
   return low; 
   /*initially,low represent invalid case, and high represented valid cases
   thus after polarity reversal ,low will represent the ans*/

}

int main(){
    vector<int> arr = {25, 46, 28, 49, 24};
    int n = 5;
    int m = 4;
    int ans = findPages(arr, n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;

    /*Time Complexity: O(N * log(sum(arr[])-max(arr[])+1)), where N = size
     of the array, sum(arr[]) = sum of all array elements, max(arr[]) = maximum 
     of all array elements.
Reason: We are applying binary search on [max(arr[]), sum(arr[])].
 Inside the loop, we are calling the countStudents() function for the value
  of ‘mid’. Now, inside the countStudents() function, we are using a loop
   that runs for N times.

Space Complexity:  O(1) as we are not using any extra space to solve this problem*/
}