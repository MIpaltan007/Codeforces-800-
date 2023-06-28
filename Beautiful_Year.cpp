#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int a,i,c=0,d,m,n,o,p;
    cin>>a;
    for(i=a;i<=9000;i++){
        m=i/1000;
        n=i/100 % 10;
        o=i/10 % 10;
        p=i%10;
       if(i>a && (m!=n && m!=o && m!=p && n!=o && n!=p && o!=p)){
        d=i;
        break;
       }
       
    } 
    cout<<""<<d<<endl;
    
    return 0;
}