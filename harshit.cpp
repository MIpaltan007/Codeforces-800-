#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for(int t = 1; t <= T; t++) {
        int n;
        cin >> n;
            
        int copyOfn;
    
        copyOfn = n;
        int l = 0;
        while(copyOfn > 0) {
            ++l;
                
            copyOfn /= 10;
        }
            
        int totalOrdinaryNos = 0;
            
        totalOrdinaryNos += (l -1) *9;
            
        totalOrdinaryNos += (int)((n / pow(10, (l -1))) -1);
            
        copyOfn = n;
        int c = 1;
        int ld = copyOfn %10;
        copyOfn /= 10;
        while(copyOfn > 0) {
            int d;
            d = copyOfn %10;
                
            if(d != ld) {
                c = 0;
                break;
            }
            copyOfn /= 10;
        }
            
        if(c == 1) {
            totalOrdinaryNos += 1;
        }
            
        cout << totalOrdinaryNos<<endl;
    }
    return 0;
}