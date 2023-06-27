#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,c=0;
    cin>>n>>m;
    i=n+m;
    while(i>=0){
        n=n-1;
        m=m-1;
        c++;
        if(m==0||n==0){
          break;
          
        }
    }
    if(n==1||m==1){
        cout<<"Akshat";
    }
    else if(c%2==0){
        cout<<"Malvika";
    }
    else if(c%2!=0){
        cout<<"Akshat";
    }
    return 0;
}
