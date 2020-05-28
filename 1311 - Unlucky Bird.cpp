#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        double v1,v2,v3,a1,a2,d,a,t1,t2,max;
        cin>>v1>>v2>>v3>>a1>>a2;
   // d=((v1*v1)/(2.0*a1))-((v2*v2)/(2.0*a2));
    t1=(v1/a1);
    t2=(v2/a2);
    max=(t1>t2)?(t1):(t2);
    a=((max)*v3);
    d=(v1*t1)-(.5*a1*t1*t1);
    d+=(v2*t2)-(.5*a2*t2*t2);
printf("Case %d: %lf %lf\n",i,fabs(d),a);
    }
}
