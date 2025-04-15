#include <stdio.h>
int main() 

{

    int num1,num2,result;
    int c; 
    while(1){
    printf("\nEnter 1st number:");
    scanf ("%d",&num1)  ;
    
    printf("Choice an option:\n" "1.+\n" "2.-\n" "3.*\n" "4./\n" "5.%\n" "6.exit\n"); 
    scanf("%d",&c);
    printf("Enter 2nd number:");
    scanf("%d",&num2);
    
    switch (c) 
    { 
     case 1: 
         result=num1+num2;
         printf("Result: %d+%d=%d",num1,num2,result);
           break;   
    
     case 2: 
         result=num1-num2;
         printf("Result: %d-%d=%df",num1,num2,result);
           break;  
     case 3: 
         result=num1*num2;
         printf("Result: %d*%d=%d",num1,num2,result);
           break;  
     case 4: 
         result=num1/num2;
         printf("Result: %d/%d=%d",num1,num2,result);
           break;  
     case 5: 
         result=(num1/num2)*100;
         printf("Result: %d%%d=%d",num1,num2,result);
           break; 
     case 6: 
         exit(0);
     default: 
         printf("wrong Input\n"); 

    };   
     //printf("%d=%d",result,result);
    }
}   