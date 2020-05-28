#include<bits/stdc++.h>
using namespace std;
int main(){
    int numcas;
    cin>>numcas;
    int cid=0,pin=1;
    while(numcas--){
        cout<<"Case "<<++cid<<":"<<endl;
        stack<string> f;
        stack<string> b;
        string mio,url,current="http://www.lightoj.com/";
        while(cin>>mio && mio!="QUIT"){
            pin=1;
            if(mio=="VISIT"){
                b.push(current);
                cin>>current;
                f = stack<string> ();
            }
            if(mio=="FORWARD"){
                if(f.empty())
                    pin=0;
                else{
                    b.push(current);
                    current=f.top();f.pop();
                }
            }
            if(mio=="BACK"){
                if(b.empty())
                    pin=0;
                else{
                    f.push(current);
                    current=b.top();b.pop();
                }
            }
            if(pin) cout<<current<<endl;
            else cout<<"Ignored"<<endl;
          }
      }
    return 0;
}
 
