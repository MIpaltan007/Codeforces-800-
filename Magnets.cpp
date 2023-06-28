#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n,i,c=0;
    cin>>n;
   long long int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
       
    }
    for(i=0;i<n;i++){
         if((a[i]==10 && a[i+1]==01)||(a[i]==01 && a[i+1]==10)){
            c++;
        }
    }
    
    cout<<""<<c+1<<endl;

    
    return 0;
}