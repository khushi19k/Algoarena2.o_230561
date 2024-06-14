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
    int n,k;
    cin>>n>>k;
    int a[k];
    int prod=1;
    for(int i=0;i<k;i++){
        cin>>a[i];
        prod*=a[i];
    } 
    int count=0;
    int d=n;
    for(int i=0;i<k;i++){
        d=n;
        if(d%a[i]==0) count+=d/a[i];
    }
    d=n;
    if(d%prod==0) count-=d/prod;
    cout<<count<<"\n";
    return 0;
}