#include<bits/stdc++.h>
using namespace std;
long long int bigmod( long long int n, long long int k, long long int m){
    if(k==0) return 1;
    if(k%2==0){
        long long int ans=bigmod(n,k/2,m);
        return (ans*ans)%m;
    }
    else return ((n%m)*(bigmod(n,k-1,m))%m)%m;
}
int main(){
int test;
cin>>test;
for(int i=1;i<=test;i++){
    long long int n,k;
    cin>>n>>k;
     double ans=1.0*k*log10(n*1.0);
   double ans1=ans-(long long) ans;
   long long x=pow(10.0,ans1)*100;
   printf("Case %d: %lld %03lld\n",i,x,bigmod(n,k,1000));
}
}
 
