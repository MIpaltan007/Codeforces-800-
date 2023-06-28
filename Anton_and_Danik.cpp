#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,c=0,cnt=0;
    cin>>n;
    char a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]=='A'){
            c++;
        }
        else{
            cnt++;
        }
    }
    if(c>cnt){
        cout<<"Anton"<<endl;
    }
    else if(c<cnt){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }

return 0;
}