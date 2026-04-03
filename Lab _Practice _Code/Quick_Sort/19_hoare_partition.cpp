#include <bits/stdc++.h>
using namespace std;
int hoare(vector<int>&a,int l,int r){
    int pivot=a[l];
    int i=l-1, j=r+1;
    while(true){
        do{ i++; } while(a[i]<pivot);
        do{ j--; } while(a[j]>pivot);
        if(i>=j) return j;
        swap(a[i],a[j]);
    }
}
void qs(vector<int>&a,int l,int r){
    if(l<r){
        int p=hoare(a,l,r);
        qs(a,l,p);
        qs(a,p+1,r);
    }
}
int main(){
    int n; cin>>n; vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    qs(a,0,n-1);
    for(int x:a) cout<<x<<" ";
    cout<<"\n";
}
