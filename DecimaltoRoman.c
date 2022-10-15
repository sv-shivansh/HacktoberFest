#include <stdio.h> 

int main() 
{   
    int num, rem, c=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Roman numerals: ");        

    while(num != 0)
    {   c++;
        switch(c)
        {
        
        case 1:
        
        if (num >= 1000)       
        {
           printf("m");
           num -= 1000;
           break;
        }
        
        case 2:
        
         if (num >= 900)   
        {
           printf("cm");
           num -= 900;
           break;
        }
                
        case 3:
        
         if (num >= 500)   
        {           
           printf("d");
           num -= 500;
           break;
        }
        
        case 4:
        
         if (num >= 400)   
        {
           printf("cd");
           num -= 400;
           break;
        }
        

        case 5:
        
         if (num >= 100)   
        {
           printf("c");
           num -= 100;
           break;                       
        }
        
  
        case 6:
        
         if (num >= 90)   
        {
           printf("xc");
           num -= 90;
           break;                                              
        }
        
        case 7:
        
         if (num >= 50)    
        {
           printf("l");
           num -= 50; 
           break;                                                                    
        }
        
        case 8:
        
         if (num >= 40)    
        {
           printf("xl");           
           num -= 40;
           break;
        }
        

        case 9:
        
         if (num >= 10)    
        {
           printf("x");
           num -= 10;
           break;           
        }
        

        case 10:
        
         if (num >= 9)     
        {
           printf("ix");
           num -= 9; 
           break;                        
        }
        

        case 11:
        
         if (num >= 5)    
        {
           printf("v");
           num -= 5; 
           break;                                    
        }
        

         case 12:
        
         if (num >= 4)     
        {
           printf("iv");
           num -= 4;
           break;                                                            
        }
        

         case 13:
        
         if (num >= 1)     
        {
           printf("i");
           num -= 1;
           break;                                                                                   
        }
        
        }
    }

    return 0;
}
