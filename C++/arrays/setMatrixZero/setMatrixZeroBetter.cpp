/*Problem Statement: Given a matrix if an element in the matrix is 0 then you
 will have to set its entire column and row to 0 and then return the matrix.*/

#include<bits/stdc++.h>
using namespace std;

vector<vector <int>> zeroMatrix(vector <vector <int>> &matrix,int n,int m){
    int row[n]={0};
    int col[m]={0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=1; //set flag =1,for that row
                col[j]=1;//set flag =1,for that col
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==1 || col[j]==1){
                matrix[i][j]=0;
            }
        }
    }

    return matrix;
}

int main(){
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size(); //no. of rows
    int m = matrix[0].size(); //no. of col

    vector <vector<int>> ans= zeroMatrix(matrix,n,m);

    cout<<"Final matrix is:"<<endl;
    for(auto it:ans){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }

/*Time Complexity: O(2*(N*M)), where N = no. of rows in the matrix and M = no.
 of columns in the matrix.
Reason: We are traversing the entire matrix 2 times and each traversal is taking
 O(N*M) time complexity.

Space Complexity: O(N) + O(M), where N = no. of rows in the matrix and M = no.
 of columns in the matrix.
Reason: O(N) is for using the row array and O(M) is for using the col array.*/
}