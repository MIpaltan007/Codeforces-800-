#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int a,b,c,x;
        cin>>a>>b>>c>>x;
        if((a+b+c+x)%3==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}