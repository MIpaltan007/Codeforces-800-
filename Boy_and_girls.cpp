#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i,c=0;
    sort(s.begin(),s.end());
    for(i=1;i<=s.length();i++){
       if(s[i]!=s[i-1]){
        c++;
       }
    }
    if(c%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM"<<endl;
    }
    return 0;
}