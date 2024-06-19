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
// const ll MOD=1000000007;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    double p[n];
    for(int i=0; i<n; i++) cin>>p[i];
    vector<double> dp(n + 1, 0.0);
    dp[0] = 1.0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>=0;j--){
            if(j>0) dp[j]=dp[j]*(1-p[i])+dp[j-1]*p[i];
            else dp[j]=dp[j]*(1-p[i]);
        }
    }
    //total heads possibility thi
    double sum=0;
    for(int i=(n+1)/2;i<=n;i++) sum+=dp[i];
    stringstream ss;
    ss << fixed << setprecision(10) << sum;
    string result = ss.str();
    result.erase(result.find_last_not_of('0') + 1, string::npos);
    if (result.back() == '.') {
        result.pop_back();
    }

    cout << result << endl;
    return 0;
}