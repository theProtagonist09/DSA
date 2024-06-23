/*Problem Statement: You are given an array of integers 'arr' and an integer i.e.
 a threshold value 'limit'. Your task is to find the smallest positive integer 
 divisor, such that upon dividing all the elements of the given array by it, 
 the sum of the division's result is less than or equal to the given threshold value.*/

 #include<bits/stdc++.h>
 using namespace std;

  int cntSum(vector<int>& nums, int threshold,int mid){
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]%mid==0){
                cnt+=nums[i]/mid;
            }else{
                 cnt+=(nums[i]/mid) +1;
            }
        }
        return cnt;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();

        if(threshold < n){
            /*if threshold is less than n, 
            no matter how large no. u take, it will never be satisfied*/
            return -1;
        }
        
        //gives max element in an array
        int maxi=*max_element(nums.begin(),nums.end());

        int low=1,high=maxi;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if( cntSum(nums,threshold,mid)<=threshold){ //if mid is valid
                ans=mid;//store mid in ans
                high=mid-1; //look in left half 
            }else{
            /*look in right half ,as mid isn't
             sufficient to keep value under threshold*/
                low=mid+1; 
            }

        }
        
        return ans;
    }

 int main(){
    vector<int> nums = {1, 2, 3, 4, 5};
    int threshold = 8;
    int ans = smallestDivisor(nums, threshold);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;

    /*Time Complexity: O(log(max(arr[]))*N), where max(arr[]) = maximum
     element in the array, N = size of the array.
Reason: We are applying binary search on our answers that are in the range
 of [1, max(arr[])]. For every possible divisor ‘mid’, we call the 
 function. Inside that function, we are traversing the entire array,
  which results in O(N).

Space Complexity: O(1) as we are not using any extra space to solve this problem.*/
 }   