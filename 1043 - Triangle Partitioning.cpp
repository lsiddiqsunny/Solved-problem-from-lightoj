#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
int test;
cin>>test;
for(int i=1;i<=test;i++){
    double a,b,c,r;
    cin>>a>>b>>c>>r;
    r=(r/(r+1));
    a=a*(sqrt(r));
    printf("Case %d: %.10lf\n",i,a);
}
}
 
