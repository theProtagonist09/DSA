/*Given a Matrix, print the given matrix in spiral order.

NOTE: only one soln exist to it, which is its optimal soln*/

#include<bits/stdc++.h>
using namespace std;

vector <int> printSpiral(vector<vector<int>> & matrix){
     vector <int> v;
        int n=matrix.size();
        int m=matrix[0].size();

        int t=0,b=n-1;  //setting top and bottom pointer
        int l=0,r=m-1;  //setting left and right pointer

        while(l<=r && t<=b){
        for(int j=l;j<=r;j++){
            v.push_back(matrix[t][j]);
        }
        t++;

        for(int i=t;i<=b;i++){
            v.push_back(matrix[i][r]);
        }
        r--;

        if(t<=b){
            for(int j=r;j>=l;j--){
                v.push_back(matrix[b][j]);
            }
            b--;
        }

        if(l<=r){
            for(int i=b;i>=t;i--){
                v.push_back(matrix[i][l]);
            }
            l++;
        }
        }

        return v;
}

int main(){
    vector<vector<int>> mat   {{1, 2, 3, 4},
                             {5, 6, 7, 8},
	                         {9, 10, 11, 12},
		                     {13, 14, 15, 16}};
		                     
  vector<int> ans = printSpiral(mat);

  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  
  /*Time Complexity: O(m * n) { Since all the elements are being
   traversed once and there are total n x m elements ( m elements in
    each row and total n rows) so the time complexity will be O(n x m)}.

Space Complexity: O(n * m) { Extra Space used for storing traversal
 in the ans array }.*/
}
