/*Problem Statement:
 You are given a read-only array of N integers with values also in the range 
 [1, N] both inclusive. Each integer appears exactly once except B which appears
  twice and A which is missing. The task is to find the repeating and missing numbers
   B and A where B repeats twice and A is missing.*/

 #include<bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a){
    
        long long n=a.size();
        long long s=n*(n+1)/2;    //sum of n natural nos
         long long s2=n*(n+1)*(2*n+1)/6;   //sum of sq of n natural nos
        
        long long sAdd=0,sSq=0; /*sAdd=sum of all elements in vector
        sSq=sum of sq of all elements in vector*/
        
        for(int i=0;i<n;i++){
            sAdd+=a[i];
            sSq+=(long long)a[i]*(long long)a[i];
        }
        
        //we observe that s-sAdd=repeating-missing=val1
        ////we observe that s2-sSq=(repeating)^2-(missing)^2=val2
        
       long val1=sAdd-s;  // repeating-missing
       long val2=sSq-s2;   //(repeating)^2-(missing)^2
       val2=val2/val1;   //repeating+missing
       
       long long repeating=(val2+val1)/2;
       long missing=(val2-val1)/2;
       
       
       return {(int)repeating,(int)missing};

}

int main(){
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
     << ans[0] << ", " << ans[1] <<"}"<<endl;

/*Time Complexity: O(N), where N = the size of the given array.
Reason: We are using only one loop running for N times. So, the time 
complexity will be O(N).

Space Complexity: O(1) as we are not using any extra space to solve this problem.*/
}