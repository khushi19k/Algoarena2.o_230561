#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        if (n == 1) {
            cout << "1\n";
            continue;
        }
        auto calculate_or = [&](int start, int length) {
            int result = 0;
            for (int i = start; i < start + length; i++) {
                result |= a[i];
            }
            return result;
        };
 
        int k = 1;
        bool found = false;
        while (k <= n) {
            bool all_same = true;
            int first_or = calculate_or(0, k);
 
            for (int i = 1; i <= n - k; i++) {
                if (calculate_or(i, k) != first_or) {
                    all_same = false;
                    break;
                }
            }
 
            if (all_same) {
                cout << k << "\n";
                found = true;
                break;
            }
            k++;
        }
 
        if (!found) {
            cout << n << "\n";
        }
    }
 
    return 0;
}
