/*Problem Statement: You are given an array of integers 'arr' and an integer i.e.
 a threshold value 'limit'. Your task is to find the smallest positive integer 
 divisor, such that upon dividing all the elements of the given array by it, 
 the sum of the division's result is less than or equal to the given threshold value.*/

 #include<bits/stdc++.h>
 using namespace std;

 int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
        }

        for(int i=1;i<=maxi;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                /*type cast nums[j] and i into float,
                 so that ceil fn can get values with decimal places */

                cnt+=ceil((double)nums[j]/(double)i);  
            }
            if(cnt<=threshold){
                return i;
            }
        }
        return -1;
    }
 
 int main(){
    vector<int> nums = {1, 2, 3, 4, 5};
    int threshold = 8;
    int ans = smallestDivisor(nums, threshold);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;

    /*Time Complexity: O(max(arr[])*N), where max(arr[]) = maximum element
     in the array, N = size of the array.
Reason: We are using nested loops. The outer loop runs from 1 to max(arr[])
 and the inner loop runs for N times.

Space Complexity: O(1) as we are not using any extra space to solve this problem.*/
 }