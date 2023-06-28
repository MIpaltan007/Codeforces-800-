#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,a,b,n,m;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cin>>n>>m;
        long long int c=n*b;
        long long int r=n%(m+1),s=n/(m+1);
        long long int t=s*a*m,j=r*b,k=r*a;
        t+=min(j,k);
        cout<<min(c,t)<<endl;
        
    }
    return 0;
}