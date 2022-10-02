#include<stdio.h>
int main()
{
     int a,b,lcm,max,step;
     printf("emter the values");
     scanf("%d%d",&a,&b);
     if(a>b)
     max=step=a;
     else
     {
         max=step=b;
     }
     while(1)
     {
         if(max%a==0 && max%b==0)
         {
         lcm = max;
         break;
         }
         max ++;
     }
     printf("lcm is %d",lcm);
     return 0;
}
