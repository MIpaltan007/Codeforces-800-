#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np,min;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a=k*l;
    int b=a/nl;//
    int e=c*d;//
    int f=p/np;//
    if(b<e && b<f){
        min=b;
    }
    else if(e<b && e<f){
        min=e;
    }
    else{
        min=f;
    }
    cout<<""<<min/n<<endl;
    return 0;
}