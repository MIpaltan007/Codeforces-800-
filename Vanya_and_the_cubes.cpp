#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0,i,s=0,g=0;
    cin>>n;
    for(i=1;i<=10000;i++){
          g=g+i;
          s=s+g;
          c++;
          if(s>=n){
            break;
          }
    }
    if(s==n){
    cout<<c<<endl;
    }
    else if(s>n){
        cout<<c-1<<endl;
    }
    return 0;
}