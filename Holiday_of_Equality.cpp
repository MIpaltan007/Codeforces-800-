#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,c=0;
    cin>>n;
    if(n==1){
        cout<<"0"<<endl;
    }
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        c+=abs(a[i]-a[i+1]);
    }
    

}