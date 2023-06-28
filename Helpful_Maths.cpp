#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a[100];
    int i,j,temp,count=0;
    for(i=0;i<s.length();i++){
        if(s[i]=='+'){
            continue;
        }
        else{
            a[count++]=s[i]-'0';
        }
    }
    sort(a,a+count);
    for(i=0;i<count;i++){
        cout<<""<<a[i];
        if(i==count-1){
            break;
        }
        cout<<"+";
    }
    return 0;
}