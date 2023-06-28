#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long int w,h,n,c=0,d=0;
        cin>>w>>h>>n;
        if(w%2!=0 && h%2!=0 && n%2==0){
            cout<<"NO"<<endl;
        }
        else if((w*h)>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}