#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m,arr[10005],n;
bool bin_s(ll val)
{
    ll i,j,k,l,cnt=1,sum=0;
    for(i=1;i<=n;i++)
    {
        //cout<<sum<<" "<<cnt<<endl;
        if(sum+arr[i]<=val)
        {
            sum+=arr[i];
        }
        else
        {
            sum=arr[i];
            cnt++;
        }
    }
    if(cnt>m)
        return 0;
    else
        return 1;
}
int main()
{
    ll i,j,k,l,test;
    cin>>test;
    for(k=1;k<=test;k++)
    {
        cin>>n>>m;
        ll sum=0,tmp=0;
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]>tmp)
                tmp=arr[i];
        }
        ll low,high,mid;
        low=tmp;
        high=sum;
        ll ans;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(bin_s(mid))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        cout<<"Case "<<k<<": "<<ans<<endl;
    }
    return 0;
}
 
