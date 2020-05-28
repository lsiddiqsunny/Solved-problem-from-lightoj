#include<bits/stdc++.h>
using namespace std;
int main(){
int test;
cin>>test;
for(int i=1;i<=test;i++){
      int n,m,j;
    cin>>n>>m;
    char str[30];
    for( j=0;j<n;j++) str[j]=(j+'A');
    str[j]='\0';
    j=0;
    cout<<"Case "<<i<<":"<<endl;
    do{
        if(j==m) break;
            j++;
        cout<<str<<endl;
    }while(next_permutation(str,str+n));
}
}
 
