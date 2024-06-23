/*Problem Statement: A monkey is given ‘n’ piles of bananas, whereas the 'ith'
 pile has ‘a[i]’ bananas. An integer ‘h’ is also given, which denotes the time (in hours)
  for all the bananas to be eaten.

Each hour, the monkey chooses a non-empty pile of bananas and eats ‘k’ bananas.
 If the pile contains less than ‘k’ bananas, then the monkey consumes all the bananas
  and won’t eat any more bananas in that hour.

Find the minimum number of bananas ‘k’ to eat per hour so that the monkey can eat
 all the bananas within ‘h’ hours.*/

 #include<bits/stdc++.h>
 using namespace std;

 int maxElement(vector<int> &piles){ 
        int n=piles.size();
        int maxi=INT_MAX;
        for(int i=0;i<n;i++){
            if(piles[i]>maxi){
                maxi=piles[i];
            }
        }
        return maxi;
    }

     /*func gives the total time if koko eats with rate of mid bananas per hr*/
    int func(vector<int>& piles,int mid){
        int n=piles.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)piles[i]/(double)mid);
        }
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high= maxElement(piles);
        int ans=1;//stores the min value of k

        while(low<=high){
            int mid=low+(high-low)/2;

            int time=func(piles,mid);  
            /*func gives the total time if koko eats with rate of mid bananas per hr*/
            if(time<=h){ 
            /*if rate of mid  per hrs is accepted,then update ans,
             and go to the left half to find minimum k*/
                ans=mid;
                high=mid-1;
            }else{ // if rate of mid per hrs isn't accepted, go to right half 
                low=mid+1;
            }
        }
        return ans;
    }
 
 int main(){
    
    vector<int> v = {7, 15, 6, 3};
    int h = 8;
    int ans = minEatingSpeed(v, h);
    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";
    return 0;

    /*Time Complexity: O(N * log(max(a[]))), where max(a[]) is the maximum element
     in the array and N = size of the array.
Reason: We are applying Binary search for the range [1, max(a[])], and for every
 value of ‘mid’, we are traversing the entire array inside the function named 
 calculateTotalHours().

Space Complexity: O(1) as we are not using any extra space to solve this problem.*/
 }