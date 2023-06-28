#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=n%10;
        int b=(n/10)%10;
        int c=(n/100)%10;
        int d=(n/1000)%10;
        int e=(n/10000)%10;
        int f=(n/100000)%10;
        int g=a+b+c;
        int h=d+e+f;
       if(g==h){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}