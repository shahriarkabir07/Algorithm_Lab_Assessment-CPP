#include <bits/stdc++.h>
using namespace std;
long long isqrt(long long x){
    long long l=0,r=x,ans=0;
    while(l<=r){
        long long m=l+(r-l)/2;
        if(m*m<=x){ ans=m; l=m+1; }
        else r=m-1;
    }
    return ans;
}
int main(){
    long long x; cin>>x;
    cout<<isqrt(x)<<"\n";
}
