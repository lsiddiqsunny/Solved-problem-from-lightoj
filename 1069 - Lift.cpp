#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        int a,b;
        cin>>a>>b;
        int sum=0;
        if(a>b)
        sum=((a-b)*4)+3+5+3+(a*4)+3+5;
        else sum=((b-a)*4)+3+5+3+(a*4)+3+5;
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
}
 
