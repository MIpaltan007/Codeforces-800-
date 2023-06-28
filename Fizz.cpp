#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    for(i=1;i<=100;i++){
        if(i%3==0||i%5==0){
            cout<<" Fizz ";
        }
        else{
            cout<<" "<<i;
        }
    }
    return 0;
}