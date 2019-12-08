#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        int n,l;
        cin>>n>>l;
        int A[n];
        for(int j=0;j<n;j++) cin>>A[j];
        int m=1,d=1,a=0,flag=1;
        int x,y;
        char c;
        for(int j=0;j<l;j++){
            cin>>c;
            if(c=='R') reverse(A,A+n);
            if(c=='S'){
                cin>>x;
         for(int k=0;k<n;k++) A[k]+=x;
            }
            if(c=='M') {
                cin>>x;
             for(int k=0;k<n;k++) A[k]*=x;
            }
            if(c=='D') {
                cin>>x;
           for(int k=0;k<n;k++) A[k]/=x;
            }
            if(c=='P'){
                cin>>x>>y;
                swap(A[x],A[y]);
            }
    }
        cout<<"Case "<<i<<":"<<endl;
          for(int j=0;j<n;j++){
            cout<<A[j];
            if(j != (n - 1)) cout << " ";
        }
        cout<<endl;
      }
}
