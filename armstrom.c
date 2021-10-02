#include<stdio.h>
int main()
{
    int remainder,num,orignalnum,result=0;
    printf("ENTER THE  NUMBER ");
    scanf("%d",&num);
    orignalnum = num;
    while(orignalnum !=0)
    {
        remainder = orignalnum%10;
        result += remainder*remainder*remainder;
        orignalnum /= 10;
       //printf("%d \n ",orignalnum);
        
    }
    if(result == num)
    printf("Number %d is armstrom",num);
    else
    printf("Number %d is not armstrom",num);

return 0;
}