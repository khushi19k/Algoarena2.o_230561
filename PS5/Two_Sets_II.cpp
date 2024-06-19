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
const int MOD=1000000007;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int s=(n*(n+1))/2;
    int dp[s+1]={0};
    dp[0]=1;
    if(s%2){
        cout<<"0"<<"\n";
        return 0;
    }else{
    s/=2;
    for(int i=1; i<=n; i++){
        for(int j=s;j>=0;j--){
            if(j-i>=0) dp[j]=(dp[j-i]+dp[j])%MOD;
        }
    }
    cout<<(dp[s]*500000004)%MOD<<endl;
    }
    return 0;
}