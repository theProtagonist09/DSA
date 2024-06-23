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

    int maximum(vector<int>& bloomDay){
        int maxim=bloomDay[0];
        int n=bloomDay.size();
        for(int i=0;i<n;i++){
            if(bloomDay[i]>maxim){
                maxim=bloomDay[i];
            }
        }
        return maxim;
    }

     int minimum(vector<int>& bloomDay){
        int minim=bloomDay[0];
        int n=bloomDay.size();
        for(int i=0;i<n;i++){
            if(bloomDay[i]<minim){
                minim=bloomDay[i];
            }
        }
        return minim;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if(n<m*k){
            return -1;
        }

        int maxi=maximum(bloomDay);
        int mini=minimum(bloomDay);

        for(int i=mini;i<=maxi;i++){
            int cnt=0;int bouq=0;
            for(int j=0;j<n;j++){
                if(i>=bloomDay[j]){  
                    cnt++;
                }else{ //if day is less than bloom day
                    bouq+=cnt/k; //first update value of bouq
                    cnt=0;//then set cnt =0
                   
                }
            }
            bouq+=cnt/k;//update bouq value,to hanlde the case if cnt agar non zero reh gya
            if(bouq>=m){
                return i;
            }
        }
        return -1;

    }
    
    int main(){
         vector<int> bloomDay = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m = 2;
    int ans = minDays(bloomDay, m, k);
    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;
    /*Time Complexity: O((max(arr[])-min(arr[])+1) * N), where
     {max(arr[]) -> maximum element of the array, min(arr[]) ->
      minimum element of the array, N = size of the array}.
Reason: We are running a loop to check our answers that are in the
 range of [min(arr[]), max(arr[])]. For every possible answer,
  we will call the possible() function. Inside the possible() function, 
  we are traversing the entire array, which results in O(N).

Space Complexity: O(1) as we are not using any extra space to solve 
this problem.*/
    }
