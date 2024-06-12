/*Problem Statement: Given a matrix if an element in the matrix is 0 then you
 will have to set its entire column and row to 0 and then return the matrix.*/

#include<bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>> &matrix,int n,int m,int i){
    for(int j=0;j<m;j++){
        matrix[i][j]=-1;
    }
}

void markCol(vector<vector<int>> &matrix,int n,int m,int j){
    for(int i=0;i<n;i++){
        matrix[i][j]=-1;
    }
}

vector <vector <int>> zeroMatrix(vector<vector<int>> &matrix,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                markRow(matrix,n,m,i);
                markCol(matrix,n,m,j);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
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

    vector <vector <int>> ans= zeroMatrix(matrix,n,m);

    cout<<"Final matrix is:"<<endl;
    for(auto it:ans){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }

/*Time Complexity: O((N*M)*(N + M)) + O(N*M), where N = no.
of rows in the matrix and M = no. of columns in the matrix.
Reason: Firstly, we are traversing the matrix to find the cells
 with the value 0. It takes O(N*M). Now, whenever we find any such
  cell we mark that row and column with -1. This process takes O(N+M).
 So, combining this the whole process, finding and marking, takes O((N*M)*(N + M)).
Another O(N*M) is taken to mark all the cells with -1 as 0 finally.

Space Complexity: O(1) as we are not using any extra space.*/
}