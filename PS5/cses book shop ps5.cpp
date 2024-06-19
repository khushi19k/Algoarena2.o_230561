#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fr pair<int,int>::first
#define sc pair<int,int>::second
using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pi;
#define int long long int
#define INF 1000000001
// const ll MOD=1000000007;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    cin>>n>>x;
    vi h(n),s(n);
    for(int i=0;i<n;i++) cin>>h[i];
    for(int i=0;i<n;i++) cin>>s[i];
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=x;j++){
            dp[i][j]=dp[i-1][j];
            if(j-h[i-1]>=0) dp[i][j]=max(dp[i-1][j],dp[i-1][j-h[i-1]]+s[i-1]);
        }
    }
    cout<<dp[n][x]<<"\n";
    return 0;
}