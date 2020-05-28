#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
          int n;
              cin>>n;
         cout<<"Case "<<i<<":"<<endl;
        for(int j=1;j<=n;j++){
            int a,b,flag=0;
            cin>>a>>b;
            if(a>=x1&&a<=x2&&b>=y1&&b<=y2) flag=1;
            if(flag) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    }
 
