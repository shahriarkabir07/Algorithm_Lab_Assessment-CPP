#include <bits/stdc++.h>
using namespace std;
void mergeVec(vector<int>&a,int l,int m,int r){
    vector<int>L(a.begin()+l,a.begin()+m+1);
    vector<int>R(a.begin()+m+1,a.begin()+r+1);
    int i=0,j=0,k=l;
    while(i<(int)L.size() && j<(int)R.size())
        a[k++]=(L[i]<=R[j]?L[i++]:R[j++]);
    while(i<(int)L.size()) a[k++]=L[i++];
    while(j<(int)R.size()) a[k++]=R[j++];
}
int main(){
    int n,l,m,r; cin>>n; vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>l>>m>>r;
    mergeVec(a,l,m,r);
    for(int x:a) cout<<x<<" ";
    cout<<"\n";
}
