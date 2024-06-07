#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b[n];
        for(int i=0;i<n;i++) cin>>b[i];
        int l[n];
        l[0]=b[0];
        for(int i=1;i<n;i++){
            l[i]=max(l[i-1],b[i]+i);
        }
        int r[n];
        r[n-1]=b[n-1]-(n-1);
        for(int i=n-2;i>=0;i--){
            r[i]=max(r[i+1],b[i]-i);
        }
        int ans=0;
        for(int i=1;i<n-1;i++){
            ans=max(ans,b[i]+l[i-1]+r[i+1]);
        }
        cout<<ans<<"\n";
    }
 
    return 0;
}