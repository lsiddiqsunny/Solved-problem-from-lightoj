#include<iostream>
#include<cstdlib>
long long int gcd (long long int a,long long int b) {
    if (a % b == 0) return b;
    return gcd(b, a%b);
}
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        long long int n,p=0,all=0,x;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>x;
            all+=abs(x);
            if(x>0) p++;
        }
        //cout<<all<<" "<<p<<endl;
        cout<<"Case "<<i<<": ";
        if(p==0) cout<<"inf"<<endl;
        else {
            long long int g=gcd(all,p);
               //  cout<<g<<endl;
            all/=g;
            p/=g;
            cout<<all<<"/"<<p<<endl;
        }
      }
}
 
