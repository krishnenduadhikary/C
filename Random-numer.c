//Random number generator 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n,i;
    long t;
    t=time(NULL);
    srand(t);
    for(i=0;i<10;i++)
     {
      n=rand()%100;
      printf("%d\n",n);
     }
    return 0;
}