#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    long long swaps=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]){ swap(a[j],a[j+1]); swaps++; }
    cout<<swaps<<"\n";
}
