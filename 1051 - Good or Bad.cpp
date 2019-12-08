#include<bits/stdc++.h>
using namespace std;
#define mx 55
int dp[mx][4][6];
bool isvowel(char c)
{
    c+=32;
    if(c=='a'|| c=='e'|| c=='i'||c=='o'|| c=='u') return 1;
    else return 0;
}
int co(string s,int i,int v,int c)
{
    if(i==s.size()) return 2;
    if(dp[i][v][c]!=-1) return dp[i][v][c];
    if(s[i]=='?')
    {
        int x,y;
        if(v<2)
            x=co(s,i+1,min(v+1,3),0);
        else x=1;
        if(c<4)
            y=co(s,i+1,0,min(5,c+1));
        else y=1;
        return   dp[i][v][c]=x|y;
        }
    else if(isvowel(s[i]))
    {
        int x;
        if(v<2)
            x=co(s,i+1,min(v+1,3),0);
        else x=1;
        return dp[i][v][c]=x;
    }
    else
    {
        int y;
        if(c<4)
            y=co(s,i+1,0,min(5,c+1));
        else y=1;
        return dp[i][v][c]=y;
    }
}
int main()
{
    int test;
    cin>>test;
    for(int cs=1; cs<=test; cs++)
    {
        memset(dp,-1,sizeof dp);
        string s;
        cin>>s;
       int op= co(s,0,0,0);
       cout<<"Case "<<cs<<": ";
       if(op==1){
        cout<<"BAD"<<endl;
       }
       else if(op==2){
        cout<<"GOOD"<<endl;
       }else
       cout<<"MIXED"<<endl;
       //  cout<<op<<endl;
      }
}
 
