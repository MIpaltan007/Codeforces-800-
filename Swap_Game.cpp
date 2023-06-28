#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,sum,cnt,count;
    cin>>t;
    while(t--){
        long long int i,n;
        sum=0;
        cnt=0;
        count=0;
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(a[i]%2!=0){
               cnt++;
            }
        }
        if(cnt%2==1){
            cout<<"Alice\n";
        }
        else{
            cout<<"Bob\n";
        }
    }
    return 0;
}