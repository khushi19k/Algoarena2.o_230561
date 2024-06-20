#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fn(i,n) for(int i=0;i<n;i++)
#define fr pair<int,int>::first
#define sc pair<int,int>::second
typedef vector <int> vi;
typedef pair<int,int> pi;
#define vpii vector<pair<int,int>>
#define int long long int
#define INF 1000000001
//const int MOD=1000000007;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int n,m;
vector<vector<int>> adj(202020);
vector<bool> vis(202020, false);

void dfs(int x){
    vis[x]=true;
    for(auto i:adj[x]){
        if(!vis[i]) dfs(i);
    }
}

int32_t main(){
    cin>>n>>m;
    // int adj[n+1][n+1];
    // for(int i=1;i<=n;i++) adj[i][i]=1;
    // for(int i=0;i<m;i++){
    //     int x,y;
    //     cin>>x>>y;
    //     adj[x][y]=1;
    //     adj[y][x]=1;
    // }
    // int count=0;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(adj[i][j]==0){
    //             count++;
    //             adj[i][j]=1;
    //             adj[j][i]=1;
    //             cout<<i<<" "<<j<<"\n";
    //         }
    //     }
    // }
    // cout<<count<<"\n";
    fn(i,m){
        int p,q;
        cin>>p>>q;
        adj[p].pb(q);
        adj[q].pb(p);
    }
    vector<int> roads;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            roads.pb(i);
            dfs(i);
        }
    }
    cout<<roads.size()-1<<"\n";
    for(int i=0;i<roads.size()-1;i++) cout<<roads[i]<<" "<<roads[i+1]<<"\n";
    return 0;
}