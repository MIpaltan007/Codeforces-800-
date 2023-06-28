#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int k,l,m,n,d,i;
    cin>>k>>l>>m>>n>>d;
    long long int a=d/k,b=0,c=0;
    for(i=1;i<=d;i++){
        if(i%3==0 && i%2!=0){
         b++;
        }
    }
    for(i=1;i<=d;i++){
        if(i%2!=0 && i%3!=0 && i%5==0){
            c++;
        }
    }
    if(k==1){
        cout<<""<<a<<endl;
    }
    else{
        cout<<""<<a+b+c<<endl;
    }
    return 0;
}