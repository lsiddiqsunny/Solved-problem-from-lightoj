#include<bits/stdc++.h>
using namespace std;
void ext_euclid(long long a, long long b, long long &x, long long &y, long long &g)
{
    x = 0, y = 1, g = b;
    long long m, n, q, r;
    for (long long u = 1, v = 0; a != 0; g = a, a = r)
    {
        q = g / a, r = g % a;
        m = x - u * q, n = y - v * q;
        x = u, y = v, u = m, v = n;
    }
}
long long mod_inv(long long n, long long m)
{
    long long x, y, gcd;
    ext_euclid(n, m, x, y, gcd);
    if (gcd != 1)
        return 0;
    return (x + m) % m;
}
int main()
{
      int test;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
        long long int n;
        cin>>n;
        vector<long long int> r(n),p(n);
        long long  int a,b;
        for(int j=0; j<n; j++)
        {
            cin>>p[j]>>r[j];
            //cout<<p[j]<<endl;
        }
        a=1;
        b=1;
        long long ans=0;
        for(int j=0; j<n; j++)
        {
            a*=p[j];
        }
        for(int j=0; j<n; j++)
        {
              b=((a/p[j])*(r[j]))%a;
            b=(b*mod_inv(a/p[j],p[j]))%a;
            ans=(ans+b)%a;
          }
        ans=(ans+a)%a;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}
 
