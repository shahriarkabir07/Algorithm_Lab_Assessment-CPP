#include <bits/stdc++.h>
using namespace std;
long long mergeInv(vector<int>&a,int l,int m,int r){
    vector<int>L(a.begin()+l,a.begin()+m+1);
    vector<int>R(a.begin()+m+1,a.begin()+r+1);
    int i=0,j=0,k=l; long long inv=0;
    while(i<(int)L.size() && j<(int)R.size()){
        if(L[i]<=R[j]) a[k++]=L[i++];
        else{ a[k++]=R[j++]; inv += (int)L.size()-i; }
    }
    while(i<(int)L.size()) a[k++]=L[i++];
    while(j<(int)R.size()) a[k++]=R[j++];
    return inv;
}
long long sortInv(vector<int>&a,int l,int r){
    if(l>=r) return 0;
    int m=l+(r-l)/2;
    long long inv=0;
    inv+=sortInv(a,l,m);
    inv+=sortInv(a,m+1,r);
    inv+=mergeInv(a,l,m,r);
    return inv;
}
int main(){
    int n; cin>>n; vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<sortInv(a,0,n-1)<<"\n";
}
