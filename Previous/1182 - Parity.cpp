#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        int n;
        cin>>n;
        int mask=1,count=0;
        for(int j=0;j<32;j++){
            if((n&mask)!=0) count++;
                mask=mask<<1;
        }
        if(count%2) cout<<"Case "<<i<<": odd"<<endl;
        else cout<<"Case "<<i<<": even"<<endl;
    }
}
 
