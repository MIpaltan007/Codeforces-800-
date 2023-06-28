#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5],i,j,b,c;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]!=0){
                b=i;
                c=j;
            }
        }
    }
cout<<""<<abs(2-b)+abs(2-c)<<endl;
return 0;
}