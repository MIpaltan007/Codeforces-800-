#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,i,n,m;
    cin>>t;
    while(t--){
        string s;
        long long int a,b,d=0,z=0;
        cin>>a>>b;
             for(i=max(a,b-100);i<=b;i++){
            s=to_string(i);
            n=*(max_element(s.begin(),s.end()))-*(min_element(s.begin(),s.end()));
            if(n>=d){
                d=n;
                z=i;
            }
           
            }
            
        cout<<""<<z<<endl;;
    }
    return 0;
}