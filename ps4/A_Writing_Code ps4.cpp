#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fr pair<int,int>::first
#define sc pair<int,int>::second
#define int long long int
#define INF 1000000001
const int MOD=1000000007;


int32_t main() {
    int n,m,b,mod;
    cin>>n>>m>>b>>mod;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    int dp[m+1][b+1]={0};
    for(int k=0;k<=b;k++) dp[0][k]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            for(int k=a[i];k<=b;k++){
                dp[j][k]=(dp[j][k]+dp[j-1][k-a[i]])%mod;
            }
        }
    }
    cout<<dp[m][b]<<"\n";
    return 0;
}