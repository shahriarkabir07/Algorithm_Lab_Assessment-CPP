#include <bits/stdc++.h>
using namespace std;
int part(vector<int>&a,int l,int r){
    int pivot=a[r], i=l-1;
    for(int j=l;j<r;j++) if(a[j]<pivot) swap(a[++i],a[j]);
    swap(a[i+1],a[r]);
    return i+1;
}
int quickselect(vector<int>&a,int l,int r,int k){
    if(l==r) return a[l];
    int p=part(a,l,r);
    if(k==p) return a[p];
    else if(k<p) return quickselect(a,l,p-1,k);
    else return quickselect(a,p+1,r,k);
}
int main(){
    int n,k; cin>>n; vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>k; // 0-indexed k
    cout<<quickselect(a,0,n-1,k)<<"\n";
}
