#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
        long long int d,n,count=1,k;
        cin>>n>>d;
    int    sum=d;
              while(sum%n != 0)
        {
              if(sum>=n)
                  sum=sum%n;
              if(sum<n)
                  sum=sum*10+d;
              count++;
          }
          cout<<"Case "<<i<<": "<<count<<endl;
    }
    }
 
