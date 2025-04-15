#include<stdio.h>
void cat(char *n,char *m);
int main()
{
 char n[10],m[10];
 printf("Enter 1st String: ");
 gets(n);
 printf("Enter 2nd String: ");
 gets(m);
 cat(n,m);
 printf("Concatenated string is:%s",n);
 return 0;
} 
 void cat(char *n,char *m)
{
 int i,len=0;
 for(i=0;n[i]!='\0';i++)
 {
  len++;
 }
 for(i=0;m[i]!='\0';i++)
 {
  n[len+i]=m[i];
 }
  n[len+i]='\0';
}