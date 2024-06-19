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

struct t { 
   int x, y, z; 
};

bool comp(t j1,t j2){
    return (j1.y<j2.y);
}
int binarySearch(struct t jobs[], int i) {
    int lo = 0, hi = i - 1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (jobs[mid].y < jobs[i].x) {
            if (jobs[mid + 1].y < jobs[i].x) {
                lo = mid + 1;
            } else {
                return mid;
            }
        } else {
            hi = mid - 1;
        }
    }
    return -1;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        int n;
        cin>>n;
        struct t a[n];
        for(int i=0;i<n;i++){
            cin>>a[i].x>>a[i].y>>a[i].z;
        }
        sort(a,a+n,comp);
        int dp[n]={0};
        dp[0]=a[0].z;
        for(int i=1;i<n;i++){
            int count=a[i].z;
            int l = binarySearch(a, i);
        if (l != -1) {
            count+= dp[l];
        }
            dp[i]=max(dp[i-1],count);
        }
        cout<<dp[n-1]<<"\n";
    return 0;
}