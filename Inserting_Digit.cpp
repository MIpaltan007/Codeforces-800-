#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
       long long int nunu,aaja,i,j=-1;
       cin>>nunu>>aaja;
       string a,r;
       cin>>a;
       for(i=0;i<nunu;i++){
        if((a[i]-'0')<aaja){
            r+='0'+aaja;
            j=i;
            break;
        }
        r+=a[i];
       }
       if(j==-1){
        r+='0'+aaja;
       }
       else{
        for(i=j;i<nunu;i++)
        r+=a[i];
       }
       cout<<r<<endl;
    }
    return 0;
}