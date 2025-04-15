/* W
   W X
   W X Y
   W X Y Z
   W X Y
   W X
   W    */
#include <stdio.h>
int main() 
{
    int i,j;
    char letters[] = {'W', 'X', 'Y', 'Z'};
    for (i = 0; i < 4; i++) 
     {
        for (j = 0; j <= i; j++) 
        {
            printf("%c ", letters[j]);
        }
        printf("\n");
    }
     for (i = 2; i >= 0; i--)
     {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", letters[j]);
        }
        printf("\n");
     }

    return 0;
}
