#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        cin >> b[i];
    }
    
    int passengers = 0;
    int capacity = 0;
    for(int i = 0; i < n; i++) {
        passengers += b[i] - a[i];
        
        if(capacity < passengers)
        capacity = passengers;
    }
    cout << capacity << endl;
    
    return 0;
}