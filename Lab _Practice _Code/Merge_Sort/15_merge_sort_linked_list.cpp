#include <bits/stdc++.h>
using namespace std;
struct Node{ int val; Node* next; Node(int v):val(v),next(nullptr){} };
Node* mergeLL(Node* a, Node* b){
    Node dummy(0), *t=&dummy;
    while(a && b){
        if(a->val<=b->val){ t->next=a; a=a->next; }
        else{ t->next=b; b=b->next; }
        t=t->next;
    }
    t->next = a ? a : b;
    return dummy.next;
}
Node* mid(Node* h){
    Node *s=h, *f=h->next;
    while(f && f->next){ s=s->next; f=f->next->next; }
    return s;
}
Node* mergeSortLL(Node* h){
    if(!h || !h->next) return h;
    Node* m=mid(h);
    Node* r=m->next; m->next=nullptr;
    return mergeLL(mergeSortLL(h), mergeSortLL(r));
}
int main(){
    int n; cin>>n;
    Node *head=nullptr,*tail=nullptr;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        Node* nd=new Node(x);
        if(!head) head=tail=nd;
        else{ tail->next=nd; tail=nd; }
    }
    head=mergeSortLL(head);
    for(Node* c=head;c;c=c->next) cout<<c->val<<" ";
    cout<<"\n";
}
