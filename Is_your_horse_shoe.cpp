#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int a[4],i,c=0;
    for(i=0;i<4;i++){
        cin>>a[i];
    }
    for(i=0;i<4;i++){
       if(a[i]==a[i+1]||a[i]==a[i+2]||a[i]==a[i+3]){
        c++;
       }
    }
    cout<<""<<c<<endl;
    return 0;
}