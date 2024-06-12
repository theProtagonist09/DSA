/*Problem Statement: Given a matrix if an element in the matrix is 0 then you
 will have to set its entire column and row to 0 and then return the matrix.*/

 #include<bits/stdc++.h>
 using namespace std;

 vector<vector<int>> zeroMatrix(vector <vector<int>>&matrix,int n,int m){
    int col0=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                if(j==0){
                    col0=0;
                }else{
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]!=0){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }

    if(matrix[0][0]==0){
        for(int j=1;j<m;j++){
            matrix[0][j]=0;
        }
    }

    if(col0==0){
        for(int i=0;i<n;i++){
            matrix[i][0]=0;
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
 }