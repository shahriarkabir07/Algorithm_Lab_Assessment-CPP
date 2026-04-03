#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,amt; cin>>n>>amt;
    vector<int> c(n); for(int i=0;i<n;i++) cin>>c[i];
    const int INF = 1e9;
    vector<int> dp(amt+1, INF);
    dp[0]=0;
    for(int i=1;i<=amt;i++)
        for(int x: c)
            if(i-x>=0 && dp[i-x]!=INF)
                dp[i]=min(dp[i], dp[i-x]+1);
    cout<<(dp[amt]==INF?-1:dp[amt])<<"\n";
}
