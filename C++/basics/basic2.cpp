#include<bits/stdc++.h>
using namespace std;

// pass by reference
//NOTE:arrays will always be passed by reference in cpp

void name(string &s){
    s[0]='a';
    cout<<s<<endl;
}

int main(){
    string s="mrinal";
    name(s);
    cout<<s;
}