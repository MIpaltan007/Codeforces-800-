#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,i,j,c=0;
    cin>>m>>n;
    do{
        c++;
        m*=3;
        n*=2;

    }while(m<=n);
    cout<<c;
    
    return 0;
}