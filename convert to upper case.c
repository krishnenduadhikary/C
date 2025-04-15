//WAP a program to convert all the characters into upper case in a given string
#include <stdio.h>

int main() 
{
    char ch[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(ch);

    for (i = 0; ch[i] != '\0'; i++) 
    {
        if (ch[i]>=97 && ch[i]<=122) 
        {
           ch[i]=ch[i]-32;
        }
    }

    printf("Given string is: %s",ch);

    return 0;
}
