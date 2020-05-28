#include<iostream>
#include<cstdlib>
#include<cstring>
struct date
{
    char month[10];
    char day[3];
    int year;
};
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
        date d1,d2;
        int day1,day2;
        cin>>d1.month>>d1.day>>d1.year>>d2.month>>d2.day>>d2.year;
        // cout<<endl<<d1.month<<d1.day<<d1.year<<d2.month<<d2.day<<d2.year;
        for(int j=0; j<3; j++) if(d1.day[j]==',')
            {
                d1.day[j]='\0';
                break;
            }
        for(int j=0; j<3; j++) if(d2.day[j]==',')
            {
                d2.day[j]='\0';
                break;
            }
        day1=atoi(d1.day);
        day2=atoi(d2.day);
        //cout<<day1<<day2;
        int a=d1.year,b=d2.year,count=0;
        count = (b/4 - b/100 + b/400) - (a/4 - a/100 + a/400);
        if(!strcmp(d1.month,"January"))
        {
            if((a%400==0)||(a%100!=0&&a%4==0)) count++;;
        }
        else if(!strcmp(d1.month,"February"))
        {
            if((a%400==0)||(a%100!=0&&a%4==0)) count++;
        }
          if(!strcmp(d2.month,"January"))  {if((b%400==0)||(b%100!=0&&b%4==0)) count--;}
            else if(!strcmp(d2.month,"February"))
            {
                if(day2!=29)  if((b%400==0)||(b%100!=0&&b%4==0)) count--;
              }
          cout<<"Case "<<i<<": "<<count<<endl;
    }
}
 
