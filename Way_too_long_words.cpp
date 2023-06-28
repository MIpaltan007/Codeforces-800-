#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int i;
        int c=s.length();
        char a=s[0];
        char b=s[c-1];
        if(c<=10){
            cout<<""<<s<<endl;
        }
        else{
            cout<<""<<a<<""<<c-2<<""<<b<<endl;
        }
    }
    return 0;
}