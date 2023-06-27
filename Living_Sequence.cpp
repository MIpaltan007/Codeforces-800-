#include<bits/stdc++.h>
using namespace std;
bool has4(int x);

bool has4(int x)
{
    while (x != 0)
    {
        if (x%10 == 4)
           return true;
        x   = x /10;
    }
    return false;
}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long  int a,c=0,d,e,i;
        cin>>a;
        if(a<4){
            cout<<""<<a<<endl;
        }
        else{
           for(i=1;i<=a;i++){
            if(has4(i)==1){
                a=a+1;
            }
           }
           cout<<""<<a<<endl;
        }

    }
    return 0;
}