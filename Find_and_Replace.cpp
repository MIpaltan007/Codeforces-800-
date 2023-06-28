#include<bits/stdc++.h>
using namespace std;
int checker(int n, string a){
    int i,j,t;
    for(i=1;i<n;i++){
        t=a[i];
        if(t>='a' && t<='z'){
        if(a[i-1]=='1'){
            for(j=i;j<n;j++){
                if(a[j]==t){
                    a[j]=='0';
                }
            }
        }
        else if(a[i-1]=='0'){
            for(j=i;j<n;j++){
                if(a[j]==t){
                    a[j]='1';
                }
            }
        }
    }
    }
    for(i=1;i<n;i++){
        if(a[i]==a[i-1]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j,c,d;
        cin>>n;
        string a,b;
        cin>>a;
        b=a;
        char t;
        t=a[0];
        a[0]='1';
        for(i=1;i<n;i++){
            if(a[i]==t){
                a[i]='1';
            }
        }
        c=checker(n,a);
        t=b[0];
        b[0]='0';
        for(i=1;i<n;i++){
            if(b[i]==t){
                b[i]='1';
            }
        }
        d=checker(n,b);
        if(d==0||c==0){
            cout<<"YES"<<endl;
        }
        else if(d==1||c==1){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}