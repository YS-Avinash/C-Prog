/*If number is 6947213 , The second Largest Digit is 7*/

#include <stdio.h>
int main()
{
    int num,temp,mod,max1=-1,max2=-1;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(num){
        mod=num%10;
        if(mod>max1){
            max2=max1;
            max1=mod;
        }else if(mod>max2){
            max2=mod;
        }
        num=num/10;
    }
    printf("The Second Largest Digit in %d is %d",temp,max2);
}
