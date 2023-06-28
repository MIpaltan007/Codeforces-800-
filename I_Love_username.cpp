#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0],min=a[0],c=0,cp=0;
    for(i=1;i<n;i++){
     if(a[i]>max){
        max=a[i];
        c++;
     }
     else if(a[i]<min){
        min=a[i];
        cp++;
     }
    }
    cout<<c+cp;
    return 0;
}