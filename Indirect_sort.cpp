#include<bits/stdc++.h>
using namespace std;
int swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return 0;
}
int main(){
   long long int t,i,j,count,temp,k;
    cin>>t;
    while(t--){
      long long  int n;
        count=0;
        cin>>n;
      long long  int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                for(k=j+1;k<n;k++){
                 if(a[i]>a[k]){
                    swap(a[i],a[i]+a[j]);
                 }
                 else{
                    swap(a[j],a[k]);
                 }
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]<a[j]){
                    count++;
                }
            }
        }
        if(count!=0){
            cout<<"YES"<<endl;;
        }
        else{
            cout<<"NO"<<endl;;
        }
    
    }
    return 0;
}