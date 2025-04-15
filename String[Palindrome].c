//WAP a program to check whether a given string is palindrome or not. 
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[10];
    printf("Enter a string: ");
    gets(str);
    int l=strlen(str);
    int beg=0,end=l-1;
    while(beg<=end)
    {
      if(str[beg]==str[end])
      {
       beg++;
       end--;
      }
      else 
         break;
    }
     if(beg<=end)  
     printf("Given string is not Palindrome"); 
     else 
     printf("Given string is Palindrome");
    
    return 0;
 
}   
        