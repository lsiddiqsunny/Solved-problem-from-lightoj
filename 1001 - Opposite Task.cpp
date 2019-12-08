#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        int n;
        cin>>n;
        if(n<=10) cout<<"0 "<<n<<endl;
        else cout<<(n-10)<<" "<<10<<endl;
    }
}
 
