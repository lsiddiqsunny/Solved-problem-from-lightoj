#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        double l,w;
        cin>>l>>w;
        double x;
        x=((l+w)-sqrt(l*l+w*w-w*l))/6.0;
        double ans;
        ans=(l-2*x)*(w-2*x)*x;
        printf("Case %d: %.10lf\n",i,ans);
    }
    }
