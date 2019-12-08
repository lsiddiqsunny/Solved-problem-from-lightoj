#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
            int t;
            long long int a[10001]={0};
        for(int j=0;j<6;j++) cin>>a[j];
        cin>>t;
    for(int j=6;j<=t;j++)
        a[j]=(a[j-1]+a[j-2]+a[j-3]+a[j-4]+a[j-5]+a[j-6])%10000007;
    printf("Case %d: %lld\n",i,a[t]%10000007);
    }
}
 
