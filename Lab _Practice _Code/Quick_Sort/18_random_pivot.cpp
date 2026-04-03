#include <bits/stdc++.h>
using namespace std;
int part(vector<int>&a,int l,int r){
    int p = l + rand()%(r-l+1);
    swap(a[p], a[r]);
    int pivot=a[r], i=l-1;
    for(int j=l;j<r;j++) if(a[j]<pivot) swap(a[++i],a[j]);
    swap(a[i+1],a[r]);
    return i+1;
}
void qs(vector<int>&a,int l,int r){
    if(l<r){
        int p=part(a,l,r);
        qs(a,l,p-1); qs(a,p+1,r);
    }
}
int main(){
    srand(time(0));
    int n; cin>>n; vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    qs(a,0,n-1);
    for(int x:a) cout<<x<<" ";
    cout<<"\n";
}
