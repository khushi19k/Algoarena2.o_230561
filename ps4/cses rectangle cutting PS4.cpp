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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b;
    cin>>a>>b;
    int dp[a+1][b+1];
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(i==j) dp[i][j]=0;
            else{
                dp[i][j]=INF;
                for(int k=1;k<j;k++) dp[i][j]=min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
                for(int k=1;k<i;k++) dp[i][j]=min(dp[i][j],dp[i-k][j]+dp[k][j]+1);
            }
        }
    }
    cout<<dp[a][b]<<"\n";
    return 0;
}