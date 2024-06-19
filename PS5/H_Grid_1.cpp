#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fr pair<int,int>::first
#define sc pair<int,int>::second
typedef vector <int> vi;
typedef pair<int,int> pi;
#define int long long int
#define INF 1000000001
const int MOD=1000000007;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int h,w;
    cin>>h>>w;
    char a[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++) cin>>a[i][j];
    }
    vector<vector<int>> dp(h,vector<int>(w, 0));
    dp[0][0]=1;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(a[i][j]=='#'){
                dp[i][j]=0;
                continue;
            }
            if(i>0) dp[i][j]=(dp[i-1][j]+dp[i][j])%MOD;
            if(j>0) dp[i][j]=(dp[i][j-1]+dp[i][j])%MOD;
        }
    }
    cout<<dp[h-1][w-1]<<"\n";
    
    return 0;
}