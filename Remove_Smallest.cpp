#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,c=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
          if(a[i]==a[i+1]){
            c++;
          }
        }
        if(n==1){
            cout<<"YES"<<endl;
        }
        else if(c!=0){

        }
    }
}
