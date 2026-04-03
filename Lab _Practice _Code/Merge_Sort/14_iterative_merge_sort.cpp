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
    int n; cin>>n; vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int sz=1; sz<n; sz*=2){
        for(int l=0; l<n-1; l+=2*sz){
            int m=min(l+sz-1, n-1);
            int r=min(l+2*sz-1, n-1);
            if(m<r) mergeVec(a,l,m,r);
        }
    }
    for(int x:a) cout<<x<<" ";
    cout<<"\n";
}
