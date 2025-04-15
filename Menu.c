#include <stdio.h>
int main() 

{

    int num1,num2,cho; 
    float result;
    while(1)
    printf("Enter Two number: ");
    scanf("%d%d",&num1,&num2);
    printf("Choice an option:"  "\n1. +" \n"2. -",\n"3. *",\n"4. /",\n"5. %",\n6.Exit); 
    scanf("%d"cho);
    switch (choice) 
    { 

    case 1: 
         { 
         result=num1+num2;
        printf("Result: %d+%d=%.2f",num1,num2,result);
           break;     
         } 
    
    case 2: 
         { 
           result=num1-num2;
        printf("Result: %d-%d=%.2f",num1,num2,result);
           break;     
         } 

    case 3: 
         { 
           result=num1*num2;
        printf("Result: %d*%d=%.2f",num1,num2,result);
           break;     
          } 

   case 4: 
         { 
           result=num1/num2;
        printf("Result: %d/%d=%.2f",num1,num2,result);
           break;     
          } 
    
    case 5: 
         { 
           result=num1%num2;
        printf("Result: %d%%d=%.2f",num1,num2,result);
           break;     
          } 

    case 6: 
         { 
           break;     
          } 

 default: 
    {
        printf("wrong Input\n"); 

    } 

    return 0; 

}
