#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        int n,count=0;
        cin>>n;
        int a[15];
        a[0]=2;
        for(int j=1;j<=n;j++){
            cin>>a[j];
          }
        for(int j=0;j<n;j++){
             if(a[j+1]>a[j]) count+=ceil((double)(a[j+1]-a[j])/5.0);
        }
        cout<<"Case "<<i<<": "<<count<<endl;
    }
}
 
