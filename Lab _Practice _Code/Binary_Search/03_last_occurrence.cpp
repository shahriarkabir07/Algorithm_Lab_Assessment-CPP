#include <bits/stdc++.h>
using namespace std;
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
    cin>>x; cout<<lastOcc(a,x)<<"\n";
}
