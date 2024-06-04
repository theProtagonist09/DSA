#include<bits/stdc++.h>
using namespace std;

int main(){
    //objective:to input lowercase alphabet,and print n successive alphabets of it.
    cout << "write the character"<<endl;
    char c;
    cin >>c;

    cout << "enter no of terms ahead of it"<<endl;
    int n;
    cin >>n;

    for(int i=1;i<=n;i++){
        char d=(int)c+i;  
        cout<<d<<endl;
    }

    

}