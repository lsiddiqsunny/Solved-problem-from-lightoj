#include<iostream>
#include<cmath>
#include<cstdio>
#define PI acos(-1.0)
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        double r1,r2,h,p,r3;
        cin>>r1>>r2>>h>>p;
        r3=(p/h)*(r1-r2)+r2;
        double area=PI*(p/3)*(r3*r3+r3*r2+r2*r2);
        printf("Case %d: %.10lf\n",i,area);
    }
}
 
