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
    int b[1000][1000]={0};
    for(int i=0; i<n; i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        b[x1][y1]++;
        b[x2][y2]++;
        b[x1][y2]--;
        b[x2][y1]--;
    }
    int area=0;
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            if(i!=0) b[i][j]+=b[i-1][j];
            if(j!=0) b[i][j]+=b[i][j-1];
            if(i>0&&j>0) b[i][j]-=b[i-1][j-1];
            if(b[i][j]==k) area++;
        }
    }
    cout<<area<<"\n";
    return 0;
}