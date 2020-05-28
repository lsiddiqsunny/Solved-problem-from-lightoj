#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        double ox,oy,ax,ay,bx,by,m1,m2,d1,d2,s,length;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
          d1=sqrt(pow(bx-ax,2)+pow(by-ay,2));
        d2=sqrt(pow(ox-ax,2)+pow(oy-ay,2));
        s=2*asin((d1/2.0)/d2);
        length=abs(s*d2);
    printf("Case %d: %.6lf\n",i,length);
      }
}
