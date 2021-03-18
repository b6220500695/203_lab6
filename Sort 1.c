#include<stdio.h>
#include<string.h>
int main()
{
    int m,a,b;
    scanf("%d",&m);
    char k[m][1000],temp[1000];
    for(a=0;a<m;a++)
    {

        scanf("%s",k[a]);
    }
for(a=0;a<m;a++)
    {
        for(b=a+1;b<m;b++)
        {
            if(strcmp(k[a],k[b])>0);
            {
                strcpy(temp,k[a]);
                strcpy(k[a],k[b]);
                strcpy(k[b],temp);
            }
        }
    }
    for(a=0;a<m;a++)
    {
        printf("%s\n",k[a]);
    }
return 0;
}
