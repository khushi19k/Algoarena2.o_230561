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

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int b[n+2];
    int c[n+2];
    b[0]=0;
    c[n+1]=0;
    for(int i=0; i<n; i++){
        b[i]=gcd(a[i],b[i-1]);
    }
    for(int i=n; i>=0; i--){
        c[i]=gcd(a[i],c[i+1]);
    }
    int ans=0;
    for(int i=1; i<=n; i++){
        ans=max(ans,gcd(b[i-1],c[i+1]));
    }
    cout<<ans<<endl;
    return 0;
}