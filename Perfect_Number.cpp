#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i,s=0;
    cin>>a;
    for(i=1;i<=a;i++){
      if(a%i==0 && a!=i){
        s+=i;
      }
    }
    if(s==a){
        cout<<"Prefect Number"<<endl;
    }
    else{
        cout<<"Not a Perfect Number"<<endl;
    }
    return 0;
}