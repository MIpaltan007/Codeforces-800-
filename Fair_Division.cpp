#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
           s+=a[i];
        }
        
         if(s%2!=0){
             cout<<"NO"<<endl;
        }
        else if(s%2==0 && n%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
