#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n;
    cin>>n;
    while(n--){
      long long  int a;
        cin>>a;
        if(a<=1399){
            cout<<"Division 4"<<endl;
        }
        else if(a>=1400 && a<=1599){
            cout<<"Division 3"<<endl;
        }
        else if(a>=1600 && a<=1899){
            cout<<"Division 2"<<endl;
        }
        else{
            cout<<"Division 1"<<endl;
        }
    }
    return 0;
}