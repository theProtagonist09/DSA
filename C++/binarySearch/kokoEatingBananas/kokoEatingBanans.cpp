/*Problem Statement: A monkey is given ‘n’ piles of bananas, whereas the 'ith'
 pile has ‘a[i]’ bananas. An integer ‘h’ is also given, which denotes the time (in hours)
  for all the bananas to be eaten.

Each hour, the monkey chooses a non-empty pile of bananas and eats ‘k’ bananas.
 If the pile contains less than ‘k’ bananas, then the monkey consumes all the bananas
  and won’t eat any more bananas in that hour.

Find the minimum number of bananas ‘k’ to eat per hour so that the monkey can eat
 all the bananas within ‘h’ hours.*/

 


#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> &v) {
    int maxi = INT_MIN;
    int n = v.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> &v, int hourly) {
    int totalH = 0;
    int n = v.size();
    //find total hours:
    for (int i = 0; i < n; i++) {
        totalH += ceil((double)(v[i]) / (double)(hourly));
    }
    return totalH;
}

int minimumRateToEatBananas(vector<int> v, int h) {
    //Find the maximum number:
    int maxi = findMax(v);

    //Find the minimum value of k:
    for (int i = 1; i <= maxi; i++) {
        int reqTime = calculateTotalHours(v, i);
        if (reqTime <= h) {
            return i;
        }
    }

    //dummy return statement
    return maxi;
}

int main()
{
    vector<int> v = {7, 15, 6, 3};
    int h = 8;
    int ans = minimumRateToEatBananas(v, h);
    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";
    return 0;

    /*Time Complexity: O(max(a[]) * N), where max(a[]) is the maximum element 
    in the array and N = size of the array.
Reason: We are running nested loops. The outer loop runs for max(a[]) times in
 the worst case and the inner loop runs for N times.

Space Complexity: O(1) as we are not using any extra space to solve this problem.*/
}

