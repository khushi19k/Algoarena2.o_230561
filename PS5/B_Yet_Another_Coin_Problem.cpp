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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=INF;
        for(int i1=0;i1<=2;i1++){
            for(int i3=0;i3<=1;i3++){
                for(int i6=0;i6<=4;i6++){
                    for(int i10=0;i10<=2;i10++){
                        int sum=i1*1+i3*3+i6*6+i10*10;
                        if(sum<=n&&(n-sum)%15==0) ans=min(ans,i1+i3+i6+i10+(n-sum)/15);
                    }

                }
            }
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}