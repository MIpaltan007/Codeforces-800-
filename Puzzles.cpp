#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,j,d=INT_MAX;
    cin>>a>>b;
    int arr[b];
    for(i=0;i<b;i++){
        cin>>arr[i];
    }
   for(i=0;i<b;i++){
    for(j=1;j<b;j++){
      if(abs(arr[i]-arr[j])<d && arr[i]!=arr[j]){
        d=abs(arr[i]-arr[j]);
      }
    }
   }
   cout<<""<<d;
    return 0;
}