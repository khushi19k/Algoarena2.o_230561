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
    int a[n];
    int m=-1;
    int index=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>m){
            m=a[i];
            index=i;
        }
    } 
    for(int i=index-1;i>=0;i--){
        if(abs(a[i]-a[i+1])>k) a[i]=a[i]+abs(a[i]-a[i+1])-k;
    }
    for(int i=index+1;i<n;i++){
        if(abs(a[i]-a[i-1])>k) a[i]=a[i]+abs(a[i]-a[i-1])-k;
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}