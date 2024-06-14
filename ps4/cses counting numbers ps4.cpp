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
    int dp[b+1];
    for(int i=1;i<=b;i++) dp[i]=1;
    int j,d;
    if(b>10){
    for(int i=11;i<=b;i++){
        j=i;
        d=i%10;
        j/=10;
        while(j>0){
        if(d==j%10){
            dp[i]=0;
            break;
        }
        dp[i]=dp[j];
        d=j%10;
        j/=10;
        if(dp[i]==0) break;
        }
    }
    }
    int count=0;
    for(int i=a;i<=b;i++){
        if(dp[i]!=0){
           count++;
        } 
        
    }
    cout<<count<<"\n";
    return 0;
}