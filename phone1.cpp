#include <stdio.h>
#include <iostream>
 
main()
{
    
   float minutes, p;
   int code;
 
   printf("Enter code: ");  
   scanf("%d", &code);
   
   printf("Enter minutes: ");  
   scanf("%f", &minutes);    

   switch(code)
   { 
     case 1:
        p = minutes * 10;
        break;            
     case 2: 
        p = minutes * 30;
        break;
     case 3: 
        p = minutes * 50;
        break;
     default: 
        printf("Not have a this code");     
        break;
   }

  printf("Price = %f", p);
}

