#include <iostream>
using namespace std;
const int N = 600000;
int seg[N];
int nn = 0;
void change(int st,int ed,int p,int l,int r,int x){
    if(l>ed || r<st){
        return ;
    }
    if(st>=l&&ed<=r){
        seg[p] = x;
        return ;
    }
    int mid = (st+ed)/2;
    change(st,mid,2*p,l,r,x);
    change(mid+1,ed,2*p+1,l,r,x);
    seg[p] = max(seg[2*p],seg[2*p+1]);
}
