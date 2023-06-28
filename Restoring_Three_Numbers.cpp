#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4],i,j,t;
    for(i=0;i<4;i++){
        cin>>a[i];
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(a[i]>a[j]){
               t=a[i];
               a[i]=a[j];
               a[j]=t;
            }
        }
    }
    cout<<""<<a[3]-a[1]<<" "<<a[3]-a[2]<<" "<<a[3]-a[0]<<endl;
    return 0;
}
