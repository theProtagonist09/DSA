/*Variation 1: Given row number r and column number c. 
Print the element at position (r, c) in Pascal’s triangle.*/

#include<bits/stdc++.h>
using namespace std;

int pascalTriangle(int r,int c){
    r=r-1;
    c=c-1;

    int num=1,denom=1;
    for(int i=0;i<c;i++){
       num=num*(r-i); //formula is (r-1)C(c-1)
        denom=denom*(c-i); 
    }

    return num/denom;

    
}

int main(){
     int r = 11; // row number
    int c = 3; // col number
    int element = pascalTriangle(r, c);
    cout << "The element at position (r,c) is: " << element << endl;

/*Time Complexity: O(c), where c = given column number.
Reason: We are running a loop for r times, where r is c-1.

Space Complexity: O(1) as we are not using any extra space.*/
}