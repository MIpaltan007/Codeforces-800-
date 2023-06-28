#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        int n,r,c=0;
        cin>>n;
        int a[n];
        
        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        int b=a[1];
        for(i=2;i<=n;i++){
            if(a[i]!=b){
              r=i;
              c++;
            }
        }
        if(c==1){
            cout<<""<<r<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
    return 0;
}