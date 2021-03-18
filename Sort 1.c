#include<stdio.h>
#include<string.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    char k[n][100],temp[100];
    for(a=0;a<n;a++)
    {
        scanf("%s",k[a]);
    }
for(a=0;a<n;a++)
    {
        for(b=a+1;b<n;b++)
        {
            if(strcmp(k[a],k[b])>0);
            {
                strcpy(temp,k[a]);
                strcpy(k[a],k[b]);
                strcpy(k[b],temp);
            }
        }
    }
    for(a=0;a<n;a++)
    {
        printf("%s\n",k[a]);
    }
return 0;
}
