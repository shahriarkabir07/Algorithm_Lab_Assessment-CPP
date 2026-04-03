#include <bits/stdc++.h>
using namespace std;
int partitionL(vector<int>&a,int l,int r){
    int pivot=a[r], i=l-1;
    for(int j=l;j<r;j++){
        if(a[j]<pivot) swap(a[++i],a[j]);
    }
    swap(a[i+1],a[r]);
    return i+1;
}
int main(){
    int n,l,r; cin>>n; vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>l>>r;
    cout<<partitionL(a,l,r)<<"\n";
}
