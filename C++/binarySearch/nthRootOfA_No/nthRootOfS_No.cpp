/*Problem Statement: Given two numbers N and M, find the Nth root of M.
 The nth root of a number M is defined as a number X when raised to the
  power N equals M. If the 'nth root is not an integer, return -1.*/

  #include<bits/stdc++.h>
  using namespace std;

  int func(int mid,int n,int m){
    int long long ans=1;
    for(int i=1;i<=n;i++){
        ans*=mid;
        if(ans>m){  // if mid^n > m
            return 2;
        }
    }
    if(ans==m){return 0;}
    return 1; //if ans<m
  }

  	int NthRoot(int n, int m){
	    int low=1,high=m;
	    
	    while(low<=high){
	        int mid=(low+high)/2;
            int midN=func(mid,n,m);  //just to compare mid^n and m 
	        if(midN==2){// if mid^n > m, then move to left half
	            high=mid-1;
	        }else if(midN==1){// if mid^n< m, then move to right half
	            low=mid+1;
	        }else{  //if mid^n ==m ,then simply return mid
	            return mid;
	        }
	    }
	    return -1;  // if ans not found, return -1
	}   
  
  int main(){
    int n = 3, m =27;
    int ans = NthRoot(n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;

    /*TC: O(n*logm)  , for binary search logm (at the base 2) and for each binary
     search, n due to for loop
     SC:O(1)*/
    
  }