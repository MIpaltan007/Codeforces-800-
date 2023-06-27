#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,i,j;
    cin>>t;
    while(t--){
    string s;
    long long int n;
    cin>>n;
    cin>>s;
   
    string r;
    for(i=0;i<n;i++){
        r+=s[i];
        for(j=i+1;j<n;j++){
            if(s[i]==s[j]){
                i=j;
                break;
            }
        }
    }
    cout<<r<<endl;
    }
    return 0;
}