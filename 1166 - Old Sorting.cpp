#include<bits/stdc++.h>
using namespace std;
   int a[101],po[101];
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        int n;
        cin>>n;
     memset(a,0,sizeof(a));
     memset(po,0,sizeof(po));
        for(int j=1;j<=n;j++){ cin>>a[j];
        po[a[j]]=j;
        }
          int co=0;
        int temp=0;
        for(int j=1;j<=n;j++){
             if(a[j]!= j){
                a[po[j]] = a[j];
                po[a[j]] = po[j];
                a[j] = j;
                co++;
            }
        }
        cout<<"Case "<<i<<": "<<co<<endl;
    }
}
 
