#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,q,l,r,k,i,s,count=0;
        cin>>n>>q;
        
        long long int a[n];
        for(i=1;i<=n;i++){
            cin>>a[i];
            count+=a[i];
        }
        while(q--){
            s=0;
        cin>>l>>r>>k;
        
        for(i=l;i<=r;i++){
            a[i]=k;
        }
        for(i=1;i<=n;i++){
         s+=a[i];
        }
        if(abs(count-s)%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
        }
    }
    return 0;
}