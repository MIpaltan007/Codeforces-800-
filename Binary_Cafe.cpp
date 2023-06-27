#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(log2(n)<k){
            cout<<""<<n+1<<endl;
        }
        else{
            cout<<""<<(long long int)pow(2,k)<<endl;
        }
    }
    return 0;
}