#include <stdio.h>
int main(void)
{
    int t,a,b,i=1;
    scanf("%d",&t);
    if(t<=125)
    {
        while(i<=t)
        {
            scanf("%d%d",&a,&b);
            if(a<=10&&b<=10)
            {
                printf("Case %d: %d\n",i,a+b);
            }
            i++;
          }
    }
        return 0;
}
