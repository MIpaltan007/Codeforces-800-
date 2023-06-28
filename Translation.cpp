#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    int i,m=0;
    int c=a.length();
    int d=b.length();
    for(i=0;i<c;i++){
        if(a[i]==b[c-i-1]){
           m++;
        }
    }
   if(m==c){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
    return 0;
}