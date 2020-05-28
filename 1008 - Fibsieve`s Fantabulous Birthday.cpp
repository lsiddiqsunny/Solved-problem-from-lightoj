#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int test,i;
    cin>>test;
    for(i=1;i<=test;i++){
        double a;
        cin>>a;
   long long int odd,even;
   odd=sqrt(a);
     if(odd%2==0) {
    odd=odd;
    even=odd+1;
   }
   else {
    even=odd;
    odd=odd+1;
   }
   odd=odd*odd;
   even=even*even;
if(abs(odd-a)<abs(even-a)){
    long long int d=odd-a;
    long long int f=(sqrt(odd));
    if(d>=0) cout<<"Case "<<i<<": "<<f<<" "<<d+1<<endl;
    else cout<<"Case "<<i<<": "<<f+1<<" "<<(-1)*d<<endl;
}
else{
    long long int d=even-a;
        long long int f=(sqrt(even));
      if(d>=0) cout<<"Case "<<i<<": "<<d+1<<" "<<f<<endl;
    else cout<<"Case "<<i<<": "<<(-1)*d<<" "<<f+1<<endl;
}
          }
}
 
