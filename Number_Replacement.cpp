#include<iostream>
using namespace std;
int main(){
    int t,i;
    scanf("%d\n",&t);
    while(t--){
        int n;
        
        cin>>n;
        int arr[n],ans[50];
        for(i=0;i<n;i++){
           cin>>arr[i];
        }
        for(i=0;i<50;i++){
            ans[i]=-1;
        }
       string s;
        cin>>s;
        bool b = true;
        for(i=0;i<n;i++){
           if(ans[arr[i]-1]==-1)
           ans[arr[i]-1]==s[i]-'a';
           else{
            if(ans[arr[i]-1]!=s[i]-'a'){
                b=false;
                break;
            }
           }
        }
        if(b==true)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}