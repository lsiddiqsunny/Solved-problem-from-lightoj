#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        double r1,r2,r3;
        cin>>r1>>r2>>r3;
        double area;
        area=sqrt(r1*r2*r3*(r1+r2+r3))-.5*(((r1*r1)*acos(1-(2*r2*r3)/((r1+r2)*(r1+r3))))+((r2*r2)*acos(1-(2*r1*r3)/((r1+r2)*(r2+r3))))+((r3*r3)*acos(1-(2*r2*r1)/((r3+r2)*(r1+r3)))));
    printf("Case %d: %.10lf\n",i,area);
    }
}
 
