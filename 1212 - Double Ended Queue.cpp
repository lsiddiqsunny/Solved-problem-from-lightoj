#include<bits/stdc++.h>
using namespace std;
class Queue
{
    int capacity,head,tell;
    int *a;
public:
    Queue(int n)
    {
        a=new int(n+5);
        for(int i=0; i<n+5; i++)
        {
            a[i]=0;//cout<<a[i]<<endl;
        }
        capacity=n;
        head=0;
        tell=0;
    }
    void Size()
    {
        cout<<capacity<<endl;
    }
    void pushLeft(int n)
    {
        if(tell==capacity)
        {
            cout<<"The queue is full"<<endl;
            return;
        }
        a[tell]=n;
        cout<<"Pushed in left: "<<a[tell]<<endl;
        tell++;
    }
    void pushRight(int n)
    {
        if(tell==capacity)
        {
            cout<<"The queue is full"<<endl;
            return;
        }
        for(int i=tell-1; i>=0; i--)
        {
            a[i+1]=a[i];
        }
        a[0]=n;
        tell++;
        cout<<"Pushed in right: "<<a[0]<<endl;
      }
    void popRight()
    {
        if(tell==0)
        {
            cout<<"The queue is empty"<<endl;
            return;
        }
        cout<<"Popped from right: "<<a[0]<<endl;
        for(int i=tell-1; i>0; i--)
        {
            a[i-1]=a[i];
        }
          a[tell-1]=0;
        tell--;
    }
    void popLeft()
    {
        if(tell==0)
        {
            cout<<"The queue is empty"<<endl;
            return;
        }
        cout<<"Popped from left: "<<a[tell-1]<<endl;
        a[tell-1]=0;
        tell--;
      }
};
int main()
{
    int test;
    cin>>test;
    int n,m;
    char str[50];
    int q;
    for(int i=1; i<=test; i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        cin>>n>>m;
        deque<int>a;
        a.clear();
        for(int j=0; j<m; j++)
        {
            cin>>str;
            if(strcmp(str,"pushLeft")==0)
            {
                cin>>q;
                if(n==a.size())
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    cout<<"Pushed in left: "<<q<<endl;
                    a.push_back(q);
                }
            }
            if(strcmp(str,"pushRight")==0)
            {
                cin>>q;
                if(n==a.size())
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    cout<<"Pushed in right: "<<q<<endl;
                    a.push_front(q);
                }
            }
            if(strcmp(str,"popRight")==0)
            {
                if(a.size()==0)
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    cout<<"Popped from right: "<<a[0]<<endl;
                    a.pop_front();
                }
            }
            if(strcmp(str,"popLeft")==0)
            {
                if(a.size()==0)
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    cout<<"Popped from left: "<<a[a.size()-1]<<endl;
                    a.pop_back();
                }
            }
          }
      }
}
 
