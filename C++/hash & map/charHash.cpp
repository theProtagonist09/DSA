#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a'] ++;
    }
    
    int t;
    cin>>t;
    while(t>0){
        t--;
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
    
}