#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,i,s=0;
    cin>>n;
    int a[]={100,20,10,5,1};
for(i=0;i<5;i++){
    s+=n/a[i];
    n=n%a[i];
}
cout<<""<<s<<endl;
return 0;
}