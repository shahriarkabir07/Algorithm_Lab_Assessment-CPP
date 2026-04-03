#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,amt; cin>>n>>amt;
    vector<int> c(n); for(int i=0;i<n;i++) cin>>c[i];
    vector<long long> dp(amt+1, 0);
    dp[0]=1;
    for(int x: c)
        for(int i=x;i<=amt;i++)
            dp[i]+=dp[i-x];
    cout<<dp[amt]<<"\n";
}
