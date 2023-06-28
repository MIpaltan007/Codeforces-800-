#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long double p=pow(2,n);
       long long int a=((long long int)p%1000000007);
       cout<<""<<a<<endl;
      
    }
    return 0;
}