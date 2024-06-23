/*Problem Statement: You are the owner of a Shipment company. You use
 conveyor belts to ship packages from one port to another. The packages
  must be shipped within 'd' days.
The weights of the packages are given in an array 'of weights'. The packages
 are loaded on the conveyor belts every day in the same order as they appear
  in the array. The loaded weights must not exceed the maximum weight capacity
   of the ship.
Find out the least-weight capacity so that you can ship all the packages
 within 'd' days.*/

 #include<bits/stdc++.h>
 using namespace std;

 /*func to calculate days in which ship can deliver all
     packages with a given capacity*/
    int noOfDays(vector<int>& weights,int capacity){
        int n=weights.size();
        int DAYS=1,load=0;  
        /*load is the weight of container at a particular time
        (assume there's a container in the ship,which carries the package materials)*/
        for(int i=0;i<n;i++){
            if(load+weights[i]>capacity){ 
                /* if container's load will exceed its capacity after 
                putting weights[i],then we will load the weight[i] on the next 
                day,so incerement the day*/
                DAYS=DAYS+1;

                /*on the next day, the sole load of the container
                 is only due to the weight[i] */
                load=weights[i];
            }else{ /* if container can load weights[i] without 
            exceeding the capacity,then just simply load the weights[i] in the container*/
            load+=weights[i];
            }
        }
        return DAYS; 
        /* returns no. of days taken, to ship all packages,with a given capacity*/
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int mini=*max_element(weights.begin(),weights.end()); //give max of all elements
        int maxi=accumulate(weights.begin(),weights.end(),0); //sum all the elements
        // for(int i=0;i<n;i++){
        //     maxi+=weights[i];
        // }

        int low=mini,high=maxi;
        int ans=0;

        while(low<=high){
            int mid=(low+high)/2;

            if(noOfDays(weights,mid)<=days){
                /* if capacity of mid can be enough to ship within
                 given days,then mid can be our ans*/

                 /*thus store value of mid in ans*/
                ans=mid;
                high=mid-1; // and look for the left half
            }else{ // if mid as capacity isn't sufficient
                low=mid+1; //then look for the right half
            }
        }
        return ans;
    }
 
 int main(){
    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int days = 5;
    int ans = shipWithinDays(weights, days);
    cout << "The minimum capacity should be: " << ans << "\n";
    return 0;

    /*Time Complexity: O(N * log(sum(weights[]) - max(weights[]) + 1)),
     where sum(weights[]) = summation of all the weights, max(weights[]) = maximum
      of all the weights, N = size of the weights array.
Reason: We are applying binary search on the range [max(weights[]), sum(weights[])].
 For every possible answer ‘mid’, we are calling findDays() function. Now, inside
  the findDays() function, we are using a loop that runs for N times.

Space Complexity: O(1) as we are not using any extra space to solve this problem.*/
 }