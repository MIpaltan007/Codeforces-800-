#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,k,q,i,c;
    cin>>t;
    while(t--){
        cin>>n>>k>>q;
        long long int a[n];
        c=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=q){
                c++;
            }
        }
        if(c==0){
            cout<<"0"<<endl;
        }
        else if(c<k){
            cout<<"0"<<endl;
        }
        else if(c==k){
           cout<<"1"<<endl;
        }
        else{

        }

    }
}