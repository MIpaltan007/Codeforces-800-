#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0,i;
    cin>>t;
    
    string s;
    while(t--){
        cin>>s;
        if(s[1]=='+'){
            ++c;
        }
        else{
            --c;
        }
    }
    cout<<""<<c<<endl;
    return 0;
} 

