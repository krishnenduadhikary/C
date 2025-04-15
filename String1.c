//WAP a program to count the number of character to a given string
#include <stdio.h>

int main() 
{
    char ch[100];
    int i = 0, count = 0;

    printf("Enter a string: ");
    gets(ch);

    while (ch[i] != '\0') 
    {
        count++;
        i++;
    }

    printf("The number of characters is: %d\n", count);

    return 0;
}
