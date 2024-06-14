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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        string b;
        cin>>b;
        int flag=1;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(b[i]=='C'&&a[i]!='C'){
                    flag=0;
                    break;
                }
                if(n==1){
                    if(a[i]=='A'&&b[i]!='A') flag=0;
                    if(a[i]=='B'&&b[i]!='B') flag=0;
                }
                // if(a[i]=='A'&&a[i+1]=='C'&&b[i]=='B'&&b[i+1]=='C'){
                //     flag=0;
                //     break;
                // }
                if(a[i]=='A'&&b[i]=='C'){
                    flag=0;
                    break;
                }
                if(a[i]=='A'&&a[i+1]=='A'&&b[i]!='A'){
                    flag=0;
                    break;
                }
                // if(a[i]=='B'&&a[i+1]=='C'&&b[i]=='A'&&b[i+1]!='B'){
                //     flag=0;
                //     break;
                // }
                if(a[i]=='B'&&b[i]=='C'){
                    flag=0;
                    break;
                }
                if(a[i]=='B'&&a[i+1]=='B'&&b[i]!='B'){
                    flag=0;
                    break;
                }
                if(a[i]=='B'&&a[i+1]=='A'&&b[i]=='A'&&b[i+1]=='B'){
                    flag=0;
                    break;
                }
                // if(x[i]=='C') flag=1;
                // if(x[i]=='A'&&x[i+1]=='B'&&y[i]=='B'&&y[i+1]=='A') flag=1;
            }
        }
        if(flag) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}