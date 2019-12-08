#include<iostream>
#include<algorithm>
#include<cstdio>
long long int fact[21]= {1,1,
                         2,
                         6,
                         24,
                         120,
                         720,
                         5040,
                         40320,
                         362880,
                         3628800,
                         39916800,
                         479001600,
                         6227020800,
                         87178291200,
                         1307674368000,
                         20922789888000,
                         355687428096000,
                         6402373705728000,
                         121645100408832000,
                         2432902008176640000,
                        };
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int  i=1; i<=n; i++)
    {
        long long int a,p;
        cin>>a;
        p=a;
        int d, mark[21]={0};
        for(int j=20;j>=0;j--){
            if(fact[j]<=a){
                    if(p==a) d=j;
                a=a-fact[j];
                mark[j]=1;
              }
        }
        if(a==0){
           printf("Case %d: ",i);
            for(int j=0;j<21;j++){
                if(mark[j]&&j!=d) cout<<j<<"!+";
                if(j==d) cout<<j<<"!"<<endl;
            }
        }
        else printf("Case %d: impossible\n",i);
    }
    }
