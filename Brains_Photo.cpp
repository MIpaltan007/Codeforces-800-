#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int m,n,i,j,c=0;
    cin>>m>>n;
    char a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[m][n];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if((a[m][n]=='W'||a[m][n]=='B'||a[m][n]=='G')&&(a[m][n]!='C'||a[m][n]!='M'||a[m][n]!='Y')){
                c++;
            }
            else if(a[m][n]=='C'||a[m][n]=='M'||a[m][n]=='Y'||a[m][n]=='W'||a[m][n]=='B'||a[m][n]=='G'){
                c=0;
            }
        }
    }
    if(c!=0){
        cout<<"#Black&White"<<endl;
    }
    else{
        cout<<"#Color"<<endl;
    }
    return 0;

}