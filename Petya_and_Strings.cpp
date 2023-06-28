#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    int c=a.length();
    int d=b.length();
    int i,e=0;
    for(i=0;i<c;i++){
      if(a[i]>='A' && a[i]<='Z'){
        a[i]=(int)a[i]+22;
      }
      if(b[i]>='A' && b[i]<='Z'){
        b[i]=(int)b[i]+22;
      }
    }
    for(i=0;i<d;i++){
      if(a[i]>b[i]){
        cout<<"1"<<endl;
        return 0;
      }
     if(a[i]<b[i]){
      cout<<"-1"<<endl;
      return 0;
     }
    }
    cout<<"0"<<endl;
    return 0;
}