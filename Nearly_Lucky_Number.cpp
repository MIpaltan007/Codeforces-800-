#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,c=0,d=0;
    cin>>a;
    while(a!=0){
        if(a%10==4||a%10==7){
        d++;
      }
      a=a/10;
      c++;
      
    }
  if(d==7||d==4){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
    return 0;
}