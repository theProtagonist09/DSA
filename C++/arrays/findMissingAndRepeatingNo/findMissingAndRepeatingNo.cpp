/*Problem Statement:
 You are given a read-only array of N integers with values also in the range 
 [1, N] both inclusive. Each integer appears exactly once except B which appears
  twice and A which is missing. The task is to find the repeating and missing numbers
   B and A where B repeats twice and A is missing.*/
   #include<bits/stdc++.h>
   using namespace std;

   vector<int> findMissingRepeatingNumbers(vector<int> a,int n){
     vector<int> soln;
       
     int A=-1,B=-1;

     for(int i=1;i<=n;i++){  //choosing a no. to find its frequency
        int cnt=0;
        for(int j=0;j<n;j++){ //traversing thru the vector
            if(i==a[j]){
                cnt++;
            }
        }
        if(cnt==2){
            B=i;
        }else if(cnt==0){
            A=i;
        }
     }

        soln.push_back(B);
         soln.push_back(A);
         
        return soln;
}

int main(){
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    int n=a.size();
    vector<int> ans = findMissingRepeatingNumbers(a,n);
    cout << "The repeating and missing numbers are: {"
     << ans[0] << ", " << ans[1] <<"}"<<endl;

    /*Time Complexity: O(N2), where N = size of the given array.
Reason: Here, we are using nested loops to count occurrences of every
 element between 1 to N.

Space Complexity: O(1) as we are not using any extra space.*/
}