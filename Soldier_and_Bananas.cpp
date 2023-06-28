#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w,i,sum=0;
    cin>>k>>n>>w;
    int j=k;
    for(i=1;i<=w;i++){
        k=k*i;
        sum=sum+k;
        k=j;
    }
    if(sum>=n){
    cout<<""<<sum-n<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}