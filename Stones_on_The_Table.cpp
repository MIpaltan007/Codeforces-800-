#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    string s;
    cin>>a;
    cin>>s;
    int i,c=0;
    for( i=0;i<s.length();i++){
    if(s[i]==s[i+1]){
        c++;
    }
    }
    cout<<""<<c;
    return 0;
}