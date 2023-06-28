#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,i,j;
    cin>>m>>n;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(i%2==1){
                cout<<"#";
            }
            else if(i%4==2 && j==n){
                cout<<"#";
            }
            else if(i%4==0 && j==1){
                cout<<"#";
            }
            else{
                cout<<".";
            }
        }
        printf("\n");
    }
    return 0;
}