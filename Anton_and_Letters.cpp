#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char arr[100];
    int count=0;
    cin>>s;
    int i;
    for(i=0;i<s.length();i++){
       if(s[i]>='a' && s[i]<='z'){
          arr[count++]=s[i];
        }
    }
    for(i=0;i<count;i++){
        cout<<arr[i];
    }
    return 0;
    }
    

