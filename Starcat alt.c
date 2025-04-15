#include<stdio.h>
int main()
{
 char n[10],m[10];
 printf("Enter 1st String: ");
 gets(n);
 printf("Enter 2nd String: ");
 gets(m);
 void cat(n[10],m[10]);
 printf("Concatenated string is:%s",n[10]);
 return 0;
} 
 void cat(n[10],m[10])
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