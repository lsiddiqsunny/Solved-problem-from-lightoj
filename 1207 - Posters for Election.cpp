#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100010;
int t,n,hash[MAXN<<1],col[MAXN<<3],cov[MAXN<<3],ans;
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
void build(){
    memset(col,0,sizeof(col));
    memset(cov,0,sizeof(cov));
    memset(hash,0,sizeof(hash));
    ans = 0;
}
void pushUP(int rt){
    if(col[rt<<1]==col[rt<<1|1])col[rt]=col[rt<<1];
    else col[rt] = 0;
}
void pushDOWN(int rt){
    if(cov[rt]){
        col[rt<<1] = col[rt<<1|1] = col[rt];
        cov[rt<<1] = cov[rt<<1|1] = 1;
        cov[rt] = 0;
    }
}
void update(int L,int R,int c,int l,int r,int rt){
    if(L<=l&&R>=r){
        col[rt] = c;
        cov[rt] = 1;
        return;
    }
    pushDOWN(rt);
    int m = (l+r)>>1;
    if(m>=L)update(L,R,c,lson);
    if(m<R)update(L,R,c,rson);
    pushUP(rt);
}
void query(int l,int r,int rt){
    if(col[rt]){
        if(!hash[col[rt]])ans++,hash[col[rt]]=1;
        return;
    }
    if(l==r)return;
    pushDOWN(rt);
    int m = (l+r)>>1;
    query(lson);
    query(rson);
    pushUP(rt);
}
int main(){
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++){
        scanf("%d",&n);
        build();
        for(int i=1;i<=n;i++){
int l,r;
            scanf("%d%d",&l,&r);
            update(l,r,i,1,2*n,1);
        }
        query(1,2*n,1);
        printf("Case %d: %d\n",cs,ans);
    }
    return 0;
}
