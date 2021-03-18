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
int query(int st,int ed,int p,int l,int r){
    if(l>ed || r<st){
        return -1e9;
    }
    if(st>=l&&ed<=r){
        return seg[p];
    }
    int mid = (st+ed)/2;
    return max(query(st,mid,2*p,l,r),query(mid+1,ed,2*p+1,l,r));
}
int main(){
    int n,Q;
    scanf("%d%d",&n,&Q);
    while(1<<nn < n) nn++;
    nn = 1<<nn;
    





