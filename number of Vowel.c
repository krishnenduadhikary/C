//WAP a program to count the number of vowel presents in a given string
#include <stdio.h>

int main() 
{
    char ch[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(ch);

    for (i = 0; ch[i] != '\0'; i++) 
    {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' ||
            ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U') {
            count++;
        }
    }

    printf("The number of vowels is: %d\n", count);

    return 0;
}
