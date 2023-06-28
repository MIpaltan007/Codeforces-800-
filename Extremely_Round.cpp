#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,a=1,b,c=0;
        int i=0;
        cin>>n;
        while(n>0){
            n=n/10;
            i++;
        }
        for(b=2;b<=i;b++){
            a=a*10;
        }
        for(x=1;x<=n;x++){
            if(x%a!=0){
               c++;
            }
        }
        cout<<""<<c<<endl; 
    }
   
    
    return 0;
}