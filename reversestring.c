//WAP a program to reverse of a given string 
#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[10], str2[10];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str1);

    int l = strlen(str1);

    for (i = l - 1; i >= 0; i--)
    {
        str2[j] = str1[i];
        j++;
    }

    str2[j] = '\0';

    printf("The Reverse string is: %s", str2);

    return 0;
}
  