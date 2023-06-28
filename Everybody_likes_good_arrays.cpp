#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long int n,i,c=0;
        cin>>n;
       long long int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n-1;i++){
          if((a[i]%2==0 && a[i+1]%2==0)||(a[i]%2==1 && a[i+1]%2==1)){
            c++;
          }
        }
        cout<<""<<c<<endl;
    }
    return 0;
}