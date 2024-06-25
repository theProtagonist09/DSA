/*Problem Statement: You are given an array 'arr' of size 'n' which denotes the
 position of stalls.
You are also given an integer 'k' which denotes the number of aggressive cows.
You are given the task of assigning stalls to 'k' cows such that the minimum 
distance between any two of them is the maximum possible.
Find the maximum possible minimum distance.*/

#include<bits/stdc++.h>
using namespace std;
bool canWePlace(vector<int>stalls,int dist,int k){
    int n=stalls.size();
    int cntCows=1; //no. of cows placed
    int last=stalls[0]; //idx at which last cow was placed

    for(int i=1;i<n;i++){
        if(stalls[i]-last>=dist){
            /* if at ith idx, distance is greater than or equal to dist
            put a cow at that place,and update last*/
            cntCows++;
            last=stalls[i];
        }

        if(cntCows>=k){
            /* if at any moment, cntCows crosses ,
            no of cows to be placed,i.e. k, return true*/
            return true;
        }
    }
    return false; //if cntCows < k
}

int aggressiveCows(vector<int> stalls,int k){
    sort(stalls.begin(),stalls.end());
    int n=stalls.size();

    //search space, of distances bw consecutive stalls
    int low=1,high=stalls[n-1]-stalls[0];  
    /*low is the min. dist possible bw consecutive cows, and high is the max dist*/

    while(low<=high){
        int mid=(low+high)/2;
        if(canWePlace(stalls,mid,k)==true){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return high; 
     /*no need to store ans in ans variable,as u can observe in BS,after the change of
      polarity in low and high, both points toward the opp of what they used to point
      i.e. in this case, previously low points toward possible dist and
       high toward not possible dist
       after change of polarity, high points toward possible and
        low toward not possible */
    
}

int main(){
     vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = aggressiveCows(stalls, k);
    cout << "The maximum possible minimum distance is: " << ans << "\n";
    return 0;
    /*Time Complexity: O(NlogN) + O(N * log(max(stalls[])-min(stalls[]))), 
    where N = size of the array, max(stalls[]) = maximum element in stalls[] 
    array, min(stalls[]) = minimum element in stalls[] array.
Reason: O(NlogN) for sorting the array. We are applying binary search
 on [1, max(stalls[])-min(stalls[])]. Inside the loop, we are calling
  canWePlace() function for each distance, ‘mid’. Now, inside the
   canWePlace() function, we are using a loop that runs for N times.

Space Complexity: O(1) as we are not using any extra space to solve this problem.*/
}