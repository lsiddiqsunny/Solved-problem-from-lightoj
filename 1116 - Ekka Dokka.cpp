#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        long long int n,a=2,b=0;
        cin>>n;
        if(n%2==1) {
            cout<<"Case "<<i<<": Impossible\n";
            continue;
        }
        else {
                int j;
            for( j=1;;j++){
                b=(n/(a));
                if(b%2==1) break;
                a*=2;
            }
            cout<<"Case "<<i<<": "<<b<<" "<<a<<endl;
        }
    }
}
 
