#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s=0,b=0,d=0,j,t;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++){
       b+=a[i];
       d++;
       if(b>s/2)
        break;
    }
    cout<<""<<d<<endl;
    return 0;
}