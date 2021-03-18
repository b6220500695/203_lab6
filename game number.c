#include<stdio.h>
int main()
{
    int k=0,m=0,j,i;
    scanf("%d",&j);
    char x[j],y[j];
    scanf("%s",x);
    scanf("%s",y);
 for ( i = 0; i < j; i++)
    {
       if (y[i]==x[i])
        {
            k++;
        }
        else
        {
            m++;
        }
    }
    printf("%d %d",k,m);
}
