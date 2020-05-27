#include<stdio.h>
#include<string.h>
int mark1[27],mark2[27];
int main()
{
    int test,i;
    scanf("%d ",&test);
    for(i=1; i<=test; i++)
    {
        memset(mark1,0,sizeof(mark1));
        memset(mark2,0,sizeof(mark2));
        char str1[1010],str2[1010];
        gets(str1);
        gets(str2);
        int flag=1;
          // cout<<strlen(str1)<<endl<<strlen(str2)<<endl;
        int j;
        for(j=0;j<strlen( str1); j++)
        {
            if(str1[j]!=' ')
            {
                if(str1[j]>='a'&&str1[j]<='z') mark1[str1[j]-'a']++;
                else mark1[str1[j]-'A']++;
            }
            //if(str2[j]!=' ') mark2[str1[j]-'a']++;
        }
          for( j=0; j<strlen(str2); j++)
        {
            if(str2[j]>='a'&&str2[j]<='z') mark2[str2[j]-'a']++;
            else mark2[str2[j]-'A']++;
        }
        for( j=0; j<26; j++) if(mark1[j]!=mark2[j])
            {
                flag=0;
                break;
            }
          if(flag) printf("Case %d: Yes\n",i);
        else  printf("Case %d: No\n",i);
      }
}
 
