#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fr first
#define sc second
#define int long long int
#define INF 1000000001
const int MOD = 1000000007;

int32_t main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int m=a[n-1];
    vector<int> v(1000000);
    for(int i=0;i<n;i++){
        v[a[i]]++;
    }
    int dp[m+1]={0};
    dp[1]=v[1];
    for(int i=2;i<=m;i++){
        dp[i]=max(dp[i-1],i*v[i]+dp[i-2]);
    }
    cout<<dp[m]<<"\n";
    return 0;
}
