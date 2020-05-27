#include<iostream>
#include<math.h>
#include<cstdio>
double PI= 2 * acos (0.0);
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        double r;
        cin>>r;
        double area;
        area=(4*r*r)-(PI*r*r);
printf("Case %d: %.2lf\n",i,area);
    }
}
 
