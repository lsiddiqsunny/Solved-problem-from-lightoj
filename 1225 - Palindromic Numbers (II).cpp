#include <stdio.h>
#include <stdlib.h>
int main ()
{
int test;
scanf("%d",&test);
int i;
for(i=1;i<=test;i++){
    int num;
    scanf("%d",&num);
int  n = num;
int rev = 0,dig=0;
while (num > 0)
 {
      dig = num % 10;
      rev = rev * 10 + dig;
      num = num / 10;
 }
if(n==rev) printf("Case %d: Yes\n",i);
else printf("Case %d: No\n",i);
}
}
 
