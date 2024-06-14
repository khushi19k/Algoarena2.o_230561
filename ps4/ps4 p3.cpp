#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
 
#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        if (n == 1) {
            cout << "0\n";
        } else if (n == 2) {
            cout << "1\n";
        } else {
            int k = ceil(log2(n));
            int power = 1LL<< k; 
            
            if (n == power) {
                cout << (power - 1) << "\n";
            } else {
                int previous_power = 1LL << (k - 1); 
                cout << (previous_power - 1) << "\n";
            }
        }
    }
    return 0;
}