#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
        int n,p,q,sum=0,count=0;
        cin>>n>>p>>q;
        int a[n];
        for(int j=0; j<n; j++) cin>>a[j];
        for(int j=0 ;j<n; j++)
        {
            if(sum<q)
            {
                sum+=a[j];
                count++;
            }
            if(sum>q) {
                count--;
                break;
            }
            if(sum==q||count==p) break;
            }
           cout<<"Case "<<i<<": "<<count<<endl;
    }
}
 
