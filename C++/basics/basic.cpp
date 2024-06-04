#include<bits/stdc++.h>
using namespace std;
//pass by value
void name(string s){
    s[0]='t';
    cout<<s<<endl;
}
int main(){
   string s="raj";
   name(s);
   cout<<s;

    return 0;
}