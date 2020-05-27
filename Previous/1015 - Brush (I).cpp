#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
       long long int n;
        cin>>n;
      long long  int a,sum=0;
        for(int j=0;j<n;j++){
            cin>>a;
         if(a>=0)   sum+=a;
        }
           cout<<"Case "<<i<<": "<<sum<<endl;
    }
}
 
