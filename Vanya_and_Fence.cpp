#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,c=0;
    cin>>a>>b;
    int arr[a];
    for(i=0;i<a;i++){
        cin>>arr[i];
        if(arr[i]<=b){
            c++;
        }
        else{
            c+=2;
        }
    }
    cout<<""<<c<<endl;

return 0;
}