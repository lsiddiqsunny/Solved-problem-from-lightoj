#include<stdio.h>
#include<math.h>
#define  PI acos(-1.0)
int main(){
    int test,i;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        double R,n,r,angle;
        scanf("%lf%lf",&R,&n);
        angle=((2.0*PI)/n)/2.0;
        r=R*sin(angle)/(1+sin(angle));
        printf("Case %d: %.10lf\n",i,r);
    }
}
 
