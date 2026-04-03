#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,W; cin>>n>>W;
    vector<int> wt(n), val(n);
    for(int i=0;i<n;i++) cin>>wt[i];
    for(int i=0;i<n;i++) cin>>val[i];
    vector<int> dp(W+1,0);
    for(int w=0; w<=W; w++)
        for(int i=0;i<n;i++)
            if(wt[i]<=w)
                dp[w]=max(dp[w], val[i]+dp[w-wt[i]]);
    cout<<dp[W]<<"\n";
}
