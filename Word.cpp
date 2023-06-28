#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char n;
    cin>>s;
    int i,cap=0,sm=0;
    for(i=0;i<s.length();i++){
       if(s[i]>='a'&& s[i]<='z'){
        sm++;
       }
       else {
        cap++;
       }
    }
    if(cap>sm){
        for(i=0;i<s.length();i++){
          n= toupper(s[i]);
           cout<<n; 
        }
        
    }
    else if(sm>cap){
        for(i=0;i<s.length();i++){
            n=tolower(s[i]);
            cout<<n;
        }
       
            
    }
    else if(sm==cap){
        for(i=0;i<s.length();i++){
          n= tolower(s[i]);
          cout<<n;
        }
        
    }
    return 0;
}