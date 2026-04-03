#include <bits/stdc++.h>
using namespace std;
int firstOcc(vector<int>& a, int x){
    int l=0,r=(int)a.size()-1,ans=-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]>=x){ if(a[m]==x) ans=m; r=m-1; }
        else l=m+1;
    }
    return ans;
}
int lastOcc(vector<int>& a, int x){
    int l=0,r=(int)a.size()-1,ans=-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]<=x){ if(a[m]==x) ans=m; l=m+1; }
        else r=m-1;
    }
    return ans;
}
int main(){
    int n,x; cin>>n; vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>x;
    int f=firstOcc(a,x), l=lastOcc(a,x);
    if(f==-1) cout<<0<<"\n"; else cout<<l-f+1<<"\n";
}
