#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int a,i;
  cin>>a;
  long long int arr[a];
  long long int max_i=INT_MIN,min_i=INT_MAX;
  for(i=0;i<a;i++){
    cin>>arr[i];
    
  }
  for(i=1;i<=a;i++){
    if(max_i<arr[i]){
      max_i=i;
      
    }
  }
  for(i=1;i<=a;i++){
    if(min_i>arr[i]){
      min_i=i;
      
    }
  }

return 0;
}