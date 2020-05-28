#include<bits/stdc++.h>
#define SIZE 10000000
#define MAX (int)(SIZE - 3) / 2
using namespace std;
typedef long long ll;
bitset<10000010>prime;
vector<int>primelist;                                                 //auxiliary bitset used to make the sieve
void seive(int sz)
{
    prime.set();
    prime[1]=0;
      for(ll i=2; i<=sz; i++)
    {
        if(prime[i])
        {
            for(ll j=i*i; j<=sz; j+=i)
                prime[j]=0;
            primelist.push_back(i);
        }
    }
}
int main()
{
    int n;
        seive(10000000);
    // for(int i=0;i<primes.size();i++) cout<<primes[i]<<endl;
    int t=0;
    cin>>t;
    int cs=0;
    while(t--)
    {
        cs++;
        cin>>n;
        int sq=sqrt(n);
        int cnt=0;
        for(int i=0; primelist[i]<=n/2; i++)
        {
//            cout<<primelist[i]<<" "<<n-primelist[i]<<endl;
            if(prime[n-primelist[i]])
                cnt++;
        }
        cout<<"Case "<<cs<<": "<<cnt<<endl;
    }
    }
// for(int i=0;i<primes.size();i++) cout<<primes[i]<<endl;
 
