#include<stdio.h>
#include<string.h>
int main()
{
   int m,i,j;
 char k[250];
 scanf("%d",&m);
 scanf("%s",k);
 int x[m][m];
 for(i=0;i<m;i++)
{
  for(j=0;j<m;j++)
  {
   x[i][j]='.';
  }
 }
 int b=0,c=0;
 for(i=0;i<strlen(k);i++)
 {
  if(k[i]=='U')
  {
   if(x[b][c]=='.'||x[b][c]=='|')
   x[b][c]='|';
   else if(x[b][c]!='-'||x[b][c]!='+')
   x[b][c]='+';
   if(b-1>=0)
   b--;
   if(x[b][c]=='.'||x[b][c]=='|')
   x[b][c]='|';
   else if(x[b][c]!='-'||x[b][c]!='+')
   x[b][c]='+';
  }
else if(k[i]=='D')
  {
   if(x[b][c]=='.'||x[b][c]=='|')
   x[b][c]='|';
   else if(x[b][c]!='-'||x[b][c]!='+')
   x[b][c]='+';
   if(b+1<m)
   b++;
   if(x[b][c]=='.'||x[b][c]=='|')
   x[b][c]='|';
   else if(x[b][c]!='-'||x[b][c]!='+')
   x[b][c]='+';
  }
  else if(k[i]=='R')
  {
   if(x[b][c]=='.'||x[b][c]=='-')
   x[b][c]='-';
   else if(x[b][c]!='|'||x[b][c]!='+')
   x[b][c]='+';
   if(c+1<m)
   c++;
   if(x[b][c]=='.'||x[b][c]=='-')
   x[b][c]='-';
   else if(x[b][c]!='|'||x[b][c]!='+')
   x[b][c]='+';
  }
  else if(k[i]=='L')
  {
   if(x[b][c]=='.'||x[b][c]=='-')
   x[b][c]='-';
   else if(x[b][c]!='|'||x[b][c]!='+')
   x[b][c]='+';
   if(c-1>=0)
   c--;
   if(x[b][c]=='.'||x[b][c]=='-')
   x[b][c]='-';
   else if(x[b][c]!='|'||x[b][c]!='+')
   x[b][c]='+';
  }
  }
 for(i=0;i<m;i++)
 {
  for(j=0;j<m;j++)
  {
   printf("%c",x[i][j]);
  }
  printf("\n");
 }
 return 0;
}
