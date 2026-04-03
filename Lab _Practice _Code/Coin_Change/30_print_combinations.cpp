#include <bits/stdc++.h>
using namespace std;
void backtrack(int i, int amt, vector<int>&c, vector<int>&cur){
    if(amt==0){
        for(int k=0;k<(int)cur.size();k++){
            if(k) cout<<"+";
            cout<<cur[k];
        }
        cout<<"\n";
        return;
    }
    if(i==(int)c.size() || amt<0) return;
    // take
    cur.push_back(c[i]);
    backtrack(i, amt-c[i], c, cur);
    cur.pop_back();
    // skip
    backtrack(i+1, amt, c, cur);
}
int main(){
    int n,amt; cin>>n>>amt;
    vector<int> c(n); for(int i=0;i<n;i++) cin>>c[i];
    vector<int> cur;
    backtrack(0, amt, c, cur);
}
