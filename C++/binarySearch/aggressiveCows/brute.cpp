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
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int limit=stalls[n-1]-stalls[0];
    for(int i=1;i<=limit;i++){
        if(canWePlace(stalls,i,k)==false){
            return (i-1);
        }
    }
    return limit;
}

int main(){
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = aggressiveCows(stalls, k);
    cout << "The maximum possible minimum distance is: " << ans << "\n";
    return 0;

    /*Time Complexity: O(NlogN) + O(N *(max(stalls[])-min(stalls[]))),
     where N = size of the array, max(stalls[]) = maximum element in
      stalls[] array, min(stalls[]) = minimum element in stalls[] array.
Reason: O(NlogN) for sorting the array. We are using a loop from 1 to 
max(stalls[])-min(stalls[]) to check all possible distances. Inside the 
loop, we are calling canWePlace() function for each distance. Now, inside
 the canWePlace() function, we are using a loop that runs for N times.

Space Complexity: O(1) as we are not using any extra space to solve this problem*/
}