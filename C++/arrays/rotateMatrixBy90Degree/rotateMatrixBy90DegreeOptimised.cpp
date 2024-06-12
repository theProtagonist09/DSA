/*Problem Statement: Given a square matrix, your task is to rotate the matrix
 90 degrees clockwise.*/

 #include<bits/stdc++.h>
 using namespace std;

  vector < vector < int >> rotate( vector < vector < int >>& matrix){
    int n=matrix.size();
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);  //taking transpose of matrix
        }
    }

    for(int i=0;i<n;i++){
        //a row is represented by matrix[i]
        reverse(matrix[i].begin(),matrix[i].end()); //reversing every row    
    }
    return matrix;
  }
 
 int main(){
    vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector < vector < int >> rotated = rotate(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < rotated.size(); i++) {
    for (int j = 0; j < rotated[0].size(); j++) {
        cout << rotated[i][j] << " ";
    }
    cout << endl;
 }
/*Time Complexity: O(N*N) + O(N*N).One O(N*N) is for 
transposing the matrix and the other is for reversing the matrix.

Space Complexity: O(1).*/
}