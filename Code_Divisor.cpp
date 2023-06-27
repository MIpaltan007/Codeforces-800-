#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,i,c;
    cin>>t;
    while(t--){
        cin>>n;
        c=0;
       for(i=2;i<=n;i++){
        if(n%i==0 && i%2==1 ){
            c++;
        }
       }
       if(c==0){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }
    }
    return 0;
}