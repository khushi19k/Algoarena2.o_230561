#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define fr pair<int,int>::first
#define sc pair<int,int>::second
typedef vector <int> vi;
typedef pair<int,int> pi;
#define INF 1e18
// const ll MOD=1000000007;
#define int long long int

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vi a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<vector<int>> dp(n+1,vector<int>(k+1,INF));
        dp[0][0]=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=k;j++){
                int m=INF;
                for(int p=0;(p<=k-j)&&(i+p<n);p++){
                    m=min(m,a[p+i]);
                    dp[i+p+1][j+p]=min(dp[i+p+1][j+p],dp[i][j]+(p+1)*m);
                }
            }
        }
        cout<<*min_element(dp[n].begin(),dp[n].end())<<endl;
    }
    
    return 0;
}