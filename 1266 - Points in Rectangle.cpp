#include<bits/stdc++.h>
using namespace std;
int plane[1005][1005];
bool ok[1005][1005];
void add(int x, int y)
{
    for(int i = x ; i <= 1001 ; i += i&-i)
        for(int j = y ; j <= 1001 ; j += j&-j)
            plane[i][j]++;
}
int getsum(int x, int y)
{
    int sum = 0;
      for(int i = x ; i > 0 ; i -= i&-i)
        for(int j = y ; j > 0 ; j -= j&-j)
            sum += plane[i][j];
      return sum;
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int cs=1; cs<=test; cs++)
    {
        memset(plane,0,sizeof plane);
        memset(ok,false,sizeof ok);
        int q;
        scanf("%d",&q);
        printf("Case %d:\n",cs);
        while(q--)
        {
            int type;
            scanf("%d",&type);
            if(!type)
            {
                int x,y;
                scanf("%d%d",&x,&y);
                x++,y++;
                  if(ok[x][y]) continue;
                else add(x,y);
                ok[x][y]=true;
            }
            else
            {
                int x1,y1,x2,y2;
                scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
                x1++,y1++,x2++,y2++;
                printf("%d\n",getsum(x2,y2) - getsum(x1-1,y2) - getsum(x2,y1-1) + getsum(x1-1,y1-1));
            }
        }
    }
}
