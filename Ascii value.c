#include <stdio.h>
#include <stdlib.h>

int main() {
   char c;
   int ascii;
   
   while(1)
  {
   printf("\nEnter a character: ");
   
   scanf(" %c",&c);
   fflush(stdin);
   ascii = (int) c;

   printf("The ASCII value of %c is %d\n",c,ascii);
if(ascii==13)break;
  
  }
   return 0;
}