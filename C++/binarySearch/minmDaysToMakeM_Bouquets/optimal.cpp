 /*Problem Statement: You are given 'N’ roses and you are also given an array 
 'arr'  where 'arr[i]'  denotes that the 'ith' rose will bloom on the 
 'arr[i]th' day.
You can only pick already bloomed roses that are adjacent to make a bouquet. 
You are also told that you require exactly 'k' adjacent bloomed roses to make 
a single bouquet.
Find the minimum number of days required to make at least ‘m' bouquets each
 containing 'k' roses. Return -1 if it is not possible.*/

 #include<bits/stdc++.h>
 using namespace std;

 //func to check if given mid , can be our ans or not
    bool isDayValid(vector<int>& bloomDay, int m, int k,int mid){
        int cnt=0;int boueq=0;
        int n=bloomDay.size();
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=mid){
                cnt++;
            }else{
                boueq+=cnt/k;
                cnt=0;
            }
        }
        boueq+=cnt/k;

        if(boueq>=m){
            return true;
        }
        return false;
    }
   
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((n/k)<m){  // condition is, if n,m*k , but to avoid overflow we use, n/k<m
            return -1;
        }

        int maxi=bloomDay[0];
        int mini=bloomDay[0];

        for(int i=0;i<n;i++){
           maxi=max(maxi,bloomDay[i]);
            mini=min(mini,bloomDay[i]);
        }

        int low=mini,high=maxi;  //defining search space
        int ans=0;

        while(low<=high){
            int mid=(low+high)/2;
            if(isDayValid(bloomDay,m,k,mid)==true){ // if mid can be our ans
            //store mid in ans
                ans=mid;
                //move to left half, to search for minimum day 
                high=mid-1;
            }else{  // if mid isn't ans, that means,not sufficient days happens
                // move to right half of search
                low=mid+1;
            }
        }

        return ans;

    }
 
 int main(){
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m = 2;
    int ans = minDays(arr, m,k);
    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;

    /*Time Complexity: O(log(max(arr[])-min(arr[])+1) * N), 
    where {max(arr[]) -> maximum element of the array, min(arr[]) -> 
    minimum element of the array, N = size of the array}.
Reason: We are applying binary search on our answers that are in the range 
of [min(arr[]), max(arr[])]. For every possible answer ‘mid’, we will call
 the possible() function. Inside the possible() function, we are traversing
  the entire array, which results in O(N).

Space Complexity: O(1) as we are not using any extra space to
 solve this problem.*/
 }