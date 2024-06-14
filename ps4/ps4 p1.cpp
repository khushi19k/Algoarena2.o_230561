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
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1) cout<<"NO\n";
        else if(n==2){
            if(s[0]<s[1]){
                cout<<"YES\n2\n";
                cout<<s[0]<<" "<<s[1]<<"\n";
            }
            else cout<<"NO\n";
        }else{
            cout<<"YES\n2\n";
            cout<<s[0]<<" ";
            for(int i=1;i<n;i++) cout<<s[i];
            cout<<"\n";
        }
        
    }
    return 0;
}