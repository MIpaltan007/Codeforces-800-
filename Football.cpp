#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=s.length(),i,c=0;
    for(i=0;i<a;i++){
        if((s[i]=='0'&& s[i+1]=='0'&& s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0')||s[i]=='1'&& s[i+1]=='1'&& s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1'){
          
          c++;
        }
    }
    if(c==0){
     cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}