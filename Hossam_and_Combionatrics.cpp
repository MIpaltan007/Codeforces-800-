#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j,te,c=0;

        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int max=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(abs(a[i]-a[j])>max){
                    max=abs(a[i]-a[j]);
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(abs(a[i]-a[j])==max){
                    c++;
                }
            }
        }

        cout<<""<<2*c<<endl;
    }
    return 0;
}