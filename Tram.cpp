#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n,arr[100],s=0,j;
    long long int count=0,i,max=INT_MIN;
    cin>>n;
   long long int a[n],b[n];
    for(i=0;i<n;i++){
     cin>>a[i];
     cin>>b[i];
     s+=b[i]-a[i];
     arr[count++]=s;
    }
   for(j=0;j<count;j++){
    if(arr[j]>max)
        max=arr[j];
   }
   cout<<""<<max<<endl;
    return 0;
}