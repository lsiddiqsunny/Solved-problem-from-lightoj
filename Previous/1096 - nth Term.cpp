#include <bits/stdc++.h>
using namespace std;
long long  mod =10007,a,b,c;
void multi(long long a[4][4], long long b[4][4], long long result[4][4])
{
      for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 4; k++)
            {
                result[i][j] = (result[i][j] % mod + (a[i][k] * b[k][j]) % mod ) % mod;
            }
        }
    }
}
void exponentation(long long z[4][4], long long result[4][4], long long n)
{
    long long temp[4][4];
      result[0][0] = a;
    result[0][1] = 0;
    result[0][2] = b;
    result[0][3] = 1;
      result[1][0] = 1;
    result[1][1] = 0;
    result[1][2] = 0;
    result[1][3] = 0;
      result[2][0] = 0;
    result[2][1] = 1;
    result[2][2] = 0;
    result[2][3] = 0;
      result[3][0] = 0;
    result[3][1] = 0;
    result[3][2] = 0;
    result[3][3] = 1;
    while(n)
    {
          if(n % 2)
        {
              multi(result, z, temp);
              for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    result[i][j] = temp[i][j];
                }
            }
        }
          multi(z, z, temp);
          for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                z[i][j] = temp[i][j];
            }
        }
          n = n / 2;
    }
}
int main()
{
      long long z[4][4];
    long long inp[4][4];
    long long result[4][4];
    long long k;
    int t;
      long long  int l,n;
      scanf("%d", &t);
        for (int cs = 1; cs <= t; cs++)
    {
            scanf("%lld", &n);
        scanf("%lld", &a);
        scanf("%lld", &b);
        scanf("%lld", &c);
        z[0][0] = a;
        z[0][1] = 0;
        z[0][2] = b;
        z[0][3] = 1;
          z[1][0] = 1;
        z[1][1] = 0;
        z[1][2] = 0;
        z[1][3] = 0;
          z[2][0] = 0;
        z[2][1] = 1;
        z[2][2] = 0;
        z[2][3] = 0;
          z[3][0] = 0;
        z[3][1] = 0;
        z[3][2] = 0;
        z[3][3] = 1;
              //  n++;
        if(n == 1)
        {
            a = a % mod;
              printf("Case %d: 0\n" ,cs);
            continue;
        }
          if(n == 2)
        {
            b = b % mod;
              printf("Case %d: 0\n" ,cs);
            continue;
        }
        if(n == 0)
        {
            b = b % mod;
              printf("Case %d: 0\n" ,cs);
            continue;
        }
            a = a % mod;
        b = b % mod;
        c = c % mod;
        exponentation(z, result, n -3);
        printf("Case %d: %lld\n",cs,(result[0][3] * c) % mod );
    }
    }
   
