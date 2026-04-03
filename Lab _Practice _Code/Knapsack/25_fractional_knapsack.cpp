#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; double W; cin>>n>>W;
    vector<double> wt(n), val(n);
    for(int i=0;i<n;i++) cin>>wt[i];
    for(int i=0;i<n;i++) cin>>val[i];
    vector<int> idx(n); iota(idx.begin(), idx.end(), 0);
    sort(idx.begin(), idx.end(), [&](int i, int j){
        return val[i]/wt[i] > val[j]/wt[j];
    });
    double res=0;
    for(int id: idx){
        if(W<=0) break;
        if(wt[id]<=W){ W-=wt[id]; res+=val[id]; }
        else{ res += val[id]*(W/wt[id]); W=0; }
    }
    cout<<fixed<<setprecision(6)<<res<<"\n";
}
