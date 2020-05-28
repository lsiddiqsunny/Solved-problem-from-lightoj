#include<iostream>
//#include<algorithm>
#include<cstdio>
struct stu{
    char name[25];
    int l,w,h;
};
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        int n;
        cin>>n;
        stu student[n];
        int area[n],flag=0,minid=0,maxid=0;
        for(int j=0;j<n;j++){
scanf("%s%d%d%d ",&student[j].name,&student[j].l,&student[j].w,&student[j].h);
area[j]=(student[j].l*student[j].w*student[j].h);
        }
     int   min=area[0];
     int   max=area[0];
        for(int j=0;j<n;j++){
            if(area[j]<min) {
                    flag=1;
               min=area[j];
                minid=j;
            }
            if(area[j]>max) {
                flag=1;
               max=area[j];
                maxid=j;
            }
          }
        if(!flag) printf("Case %d: no thief\n",i);
        else
printf("Case %d: %s took chocolate from %s\n",i,student[maxid].name,student[minid].name);
    }
}
 
