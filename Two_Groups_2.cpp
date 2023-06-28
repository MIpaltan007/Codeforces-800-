#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  int t,i,sum,SUM;
    cin>>t;
    while(t--){
        long long int n;
        sum=0;
        SUM=0;
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(a[i]<0){
                sum+=a[i];
            }
            else{
                SUM+=a[i];
            }
        }
        cout<<"\n"<<max(abs(sum)-SUM,SUM-abs(sum));
 
    }
    return 0;
}