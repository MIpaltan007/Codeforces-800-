#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,i,sum=0,count,Max;
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==0){
            cout<<0<<endl;
        }
        else{
             Max=INT_MAX;
            for(i=0;i<n;i++){
                count=0;
                if(a[i]%2==0){
                    while(a[i]!=1)
                    {
                        a[i]=a[i]/2;
                        count++;
                    }
                }
                else{
                    while(a[i]%2!=0){
                        a[i]=a[i]/2;
                        count++;
                    }
                }
                if(count!=0)
            Max=min(Max,count);
            }
            
cout<<""<<Max<<endl;
        }
        
    
    }
    return 0;
}