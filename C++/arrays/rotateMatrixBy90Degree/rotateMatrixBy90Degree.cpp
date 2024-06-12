/*Problem Statement: Given a square matrix, your task is to rotate the matrix
 90 degrees clockwise.*/

 #include<bits/stdc++.h>
 using namespace std;

 vector < vector < int >> rotate(vector < vector < int >>& matrix){
    int n=matrix.size();
    vector < vector < int >> dupli(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dupli[j][n-1-i]=matrix[i][j];
        }
    }
    return dupli;
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

 /*Time Complexity: O(N*N) to linearly iterate and put it into some other matrix.

Space Complexity: O(N*N) to copy it into some other matrix.*/
} 