#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,c=0,j,a,b=0,m=0;
        cin>>n;
        if(n<=9){
            cout<<""<<n<<endl;
        }
        else{
          for(i=10;i<=n;i++){
            while(i!=0){
                i=i/10;
                c++;
            }
            for(j=1;j<=c;j++){
                a=i;
                i=i%10;
                if(a==i){
                    b++;
                }
            }
            if(b==c){
                m++;
            }
          }
        }
        cout<<""<<m+9<<endl;
    }
    return 0;
}