#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cstdio>
int array[4];
int mark[4];
using namespace std;
int main()
{
      int test;
scanf("%d ",&test);
    for(int i=1;i<=test;i++){
            mark[0]=0;
    mark[1]=0;
     mark[2]=0;
      mark[3]=0;
      array[0]=0;
       array[1]=0;
        array[2]=0;
         array[3]=0;
            char str1[16],str2[36],ch[4],c;
    gets(str1);
    gets(str2);
    int k=0,l=0,s=0;
    for(int j=0;j<strlen(str1);j++){
     if(str1[j]=='.')
          {
              ch[k]='\0';
            //  puts(ch);
              mark[l]=atoi(ch);
              k=0;
              l++;
              continue;
            }
          ch[k]=str1[j];
          k++;
    }
            ch[k]='\0';
              mark[3]=atoi(ch);
     // cout<<mark[0]<<mark[1]<<mark[2]<<mark[3]<<endl;
    l=0;
    for(int j=0;j<strlen(str2);j=j+9){
s=0;
        for(int k=j+7;k>=j;k--){
                c=str2[k]-'0';
          //   printf("%d ",c);
           if(c) array[l]+=pow(2,s);
    s++;
          }
       // cout<<endl;
l++;
    }
    int flag=1;
    for(int k=0;k<4;k++){
        if(mark[k]!=array[k]){
            flag=0;
        }
      }
    if(flag) printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
   // cout<<array[0]<<endl<<array[1]<<endl<<array[2]<<endl<<array[3]<<endl;
      }
}
 
