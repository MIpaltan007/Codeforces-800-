#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,a;
    cin>>n>>a;
    string s;
    cin>>s;
    for(i=1;i<=n;i++){
        for(j=1;j<=a;j++){
          if(s[i]=='B'&& s[i+j]=='G')
          swap(s[i],s[i+j]);
        }
    }
    cout<<s;
    return 0;
    }
