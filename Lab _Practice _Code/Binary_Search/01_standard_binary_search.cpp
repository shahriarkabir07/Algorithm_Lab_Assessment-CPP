#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& a, int x){
    int l=0, r=(int)a.size()-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]==x) return m;
        if(a[m]<x) l=m+1; else r=m-1;
    }
    return -1;
}
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n,x; cin>>n; vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>x;
    cout<<binarySearch(a,x)<<"\n";
}
