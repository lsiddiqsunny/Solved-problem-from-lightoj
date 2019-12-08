#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int h,w,n=0;
int mark[21][21]= {0};
char grid[21][21];
void search(int i,int j)
{
    if((i+1)<h&&grid[i+1][j]=='.'&&!mark[i+1][j])
    {
        mark[i+1][j]=1;
        n++;
        search(i+1,j);
    }
    if((j+1)<w&&grid[i][j+1]=='.'&&!mark[i][j+1])
    {
        mark[i][j+1]=1;
        n++;
        search(i,j+1);
    }
    if((i-1)>=0&&grid[i-1][j]=='.'&&!mark[i-1][j])
    {
        mark[i-1][j]=1;
        n++;
        search(i-1,j);
    }
    if((j-1)>=0&&grid[i][j-1]=='.'&&!mark[i][j-1])
    {
        mark[i][j-1]=1;
        n++;
        search(i,j-1);
    }
}
int main()
{
    int test,p,r;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
        cin>>w>>h;
        memset(mark,0,sizeof(mark));
        n=0;
        for(int j=0; j<h; j++)
        {
            for(int k=0; k<w; k++)
            {
                cin>>grid[j][k];
                if(grid[j][k]=='@')
                {
                    p=j;
                    r=k;
                    mark[p][r]=1;
                    n++;
                  }
              }
        }
            search(p,r);
cout<<"Case "<<i<<": "<<n<<endl;
      }
}
 
