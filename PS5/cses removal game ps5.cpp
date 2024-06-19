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
    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> p(n+1);
    p[0]=0;
    for(int i=0;i<n;i++){
        cin>>x[i];
        p[i+1]=x[i]+p[i];
    }
    vector<vector<int>> dp(n,vector<int>(n, 0));
    for(int i=1;i<=n;i++){
        for(int l=0;l<=n-i;l++){
            int r=l+i-1;
            if(l==r){
                dp[l][r]=x[l];
            }else{
                dp[l][r]=max(x[l]-dp[l+1][r]+(p[r+1]-p[l+1]),x[r]-dp[l][r-1]+(p[r]-p[l]));
            }
        }
    }
    cout<<dp[0][n-1]<<"\n";
    return 0;
}