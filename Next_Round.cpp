#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,i,c=0;
    cin>>m>>n;
    int a[m];
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    for(i=0;i<m;i++){
        if(a[i]>=a[n-1] && a[i]>0)
       c++;
    }
    cout<<""<<c<<endl;
    return 0;
}