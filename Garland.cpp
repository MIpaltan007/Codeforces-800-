#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,i,c=0;
        cin>>n;
        int a=n%10;
        int b=(n/10)%10;
        int c=(n/100)%10;
        int d=(n/1000);
        if(a!=b && b!=c && c!=d && d!=a){
            cout<<""<<n<<endl;
        }
       int arr[4]={a,b,c,d};
    for(i=1;i<=4;i++){
        if(arr[i])
    }

    }
}