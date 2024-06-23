/*Problem Statement: You are given a positive integer n.
 Your task is to find and return its square root. If ‘n’ is
  not a perfect square, then return the floor value of 'sqrt(n)'.

Note: The question explicitly states that if the given number, n,
 is not a perfect square, our objective is to find the maximum number,
  x, such that x squared is less than or equal to n (x*x <= n). In other 
  words, we need to determine the floor value of the square root of n.*/

  #include<bits/stdc++.h>
  using namespace std;

  long long int floorSqrt(long long int x) 
    {  
    //assign low as the minimum the ans could be ,ans high as the maximum ans could be
        long long low=1,high=x;   //assume search space as integers from 1 to x
        long long ans=1;
        while(low<=high){
            long long mid=(low+high)/2;
            if(mid*mid>x){//if mid*mid > x, we cannot get ans on right half
                high=mid-1;   //move to left half
            }else if(mid*mid<x){  //if mid*mid<x, maybe mid can be my ans
                ans=mid;  //update ans
                low=mid+1;   //move to right half,maybe we can get more closer result
            }else{    // if mid*mid == x, we found our sq root,simply return mid
                return mid;
            }
        }
        return ans;
    }
  
  int main(){
    long long int n = 28;
    long long int ans = floorSqrt(n);  //give long long,to avoid any overflow
    cout << "The floor of square root of " << n
         << " is: " << ans << "\n";
    return 0;
  }