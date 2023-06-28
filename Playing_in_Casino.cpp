#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,m,d,i,b,s=0,j;
        cin>>n>>m;
        d=m*n;
        long long int a[d];
        for(i=1;i<=d;i++){
            cin>>a[i];
        }
        for(i=1;i<=d-m;i++){
          for(j=i+m;j<=d;j++){
            b=abs(a[i]-a[j]);
            s+=b;
          }
        }
        cout<<""<<s<<endl;
    }
    return 0;
}