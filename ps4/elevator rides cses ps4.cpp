#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fr first
#define sc second
typedef vector<int> vi;
typedef pair<int, int> pi;
#define int long long int
#define INF 1000000001

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<pi> dp(1 << n, {n + 1, 0});
    dp[0] = {1,0};

    for (int s = 0; s < (1 << n); s++) {
        for (int i = 0; i < n; i++) {
            if (s & (1 << i)) continue;
            pi p=dp[s];
            if (p.sc + a[i] <= x) {
                p.sc += a[i];
            } else {
                p.fr++;
                p.sc = a[i];
            }
            dp[s | (1 << i)] = min(dp[s | (1 << i)], p);
        }
    }

    cout << dp[(1 << n) - 1].fr << "\n";
    return 0;
}
