#include<iostream>
#include<math.h>
using namespace std;
int main(){
int test;
cin>>test;
for(int i=1;i<=test;i++){
    int n;
    double d;
    cin>>n;
   d=sqrt(2.0*n*log(2.0))+(3.0-2.0*log(2.0))/6.0+(9.0-4.0*(log(2.0))*(log(2.0)))/(72.0*sqrt(2.0*n*log(2.0)))-(2.0*(log(2.0)*log(2.0))/(135.0*n));
    n=d;
    cout<<"Case "<<i<<": "<<n<<endl;
}
      }
