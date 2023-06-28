#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        int a=abs(x1-x2),b=abs(x1-x3),c=abs(x2-x3),d=abs(y1-y2),e=abs(y2-y3),f=abs(y1-y3);
        int g=(a*a + d*d);
        int h=(b*b + f*f);
        int i=(c*c + e*e);; 
        if(x1==x2 && y2==y3||x2==x3 && y1==y2||g+h==i||h+i==g||i+g==h){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}