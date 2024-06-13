/*Given the row number n. Print the n-th row of Pascal’s triangle.*/

#include<bits/stdc++.h>
using namespace std;

void pascalTriangle(int n){
    int ans=1;

    cout<<ans<<" "; //printing first element
    for(int i=1;i<n;i++){
        ans=ans*(n-i);
        ans=ans/i;  //printing remaining element
        cout<<ans<<" ";
    }
}

int main(){
    int n = 6;
    pascalTriangle(n);

/*Time Complexity: O(N) where N = given row number.
 Here we are using only a single loop.

Space Complexity: O(1) as we not using any extra space.*/
}