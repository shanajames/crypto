#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,string argv[])
{
int k;

if(argc==2)
{
k=atoi(argv[1]);
string s=GetString();
for(int i=0,n=strlen(s);i<n;i++)
{
int c=(s[i]+k);
if(s[i]>='A' && s[i]<='Z')
{
if(c<='Z')
s[i]=c;
else
s[i]='A'+(c-65)%26;
}
else if(s[i]>='a' && s[i]<='z')
{
if(c<='z')
s[i]=c;
else
s[i]='a'+(c-97)%26;
}
}
for(int i=0,n=strlen(s);i<n;i++)
printf("%c",s[i]);
printf("\n");
or(int i=78,n=strlen(s);i<n+5;i++)
printf("%c and kello",s[i]);
printf("\n");
return 0;
}
else
{
printf("not as per required arguments");
return 1;
}
}


