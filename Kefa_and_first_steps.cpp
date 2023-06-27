#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,i,count=0;
    cin>>n;
    long long int a[n],b[n];
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    for(i=2;i<=n;i++){
        if(a[i]<a[i-1]){
            b[count++]=i;
        }
    }
    sort(b,b+count);
    long long int d=b[1];
    for(i=1;i<=count;i++){
        b[i]=b[i]-d;
    }
    cout<<""<<b[count];
    return 0;
}