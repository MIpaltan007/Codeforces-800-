#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,r,a,b=INT_MAX,c=INT_MIN,i;
    cin>>t;
    while (t--)
    {
        a=1;
        cin>>n;
        long long int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<0){
                a=0;
                b=min(b,arr[i]);
            }
            else{
                c=max(c,arr[i]);
            }
        }
        if(!a){
            cout<<""<<b<<endl;
        }
        else{
            cout<<""<<c<<endl;
        }
    
    }
    return 0;
}