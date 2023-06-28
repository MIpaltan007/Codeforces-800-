#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,n;
    cin>>a>>b;
    int d=min(a,b);
    for(i=d;i>=1;i--){
        if(a%i==0 and b%i==0){
            n=i;
            break;
        }
    }
    cout<<""<<n<<endl;
    return 0;
}