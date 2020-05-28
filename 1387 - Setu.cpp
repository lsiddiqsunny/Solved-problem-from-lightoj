#include<stdio.h>
int main()
{
    int i,j,k,money,m,test,acc;
    char ara[6]={0};
      scanf("%d",&test);
      for(m=1;m<=test;m++){
            printf("Case %d:\n",m);
              scanf("%d",&j);
            k=0;
                for(i=1;i<=j;i++){
              scanf("%s",ara);
            if(ara[0]=='d'){
                    scanf("%d",&acc);
            k=k+acc;
              }
                 else{
                   printf("%d\n",k);}
            }
              }
        }
 
