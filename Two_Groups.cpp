#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,i,n,a,sum;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        for(i=0;i<n;i++){
            cin>>a;
            sum=sum+a;
        }
        cout<<abs(sum);
        sum=0;
    }
    return 0;

}