#include<stdio.h>
#include<math.h>
int isPrime(int num){
	int val=1,i;
	if(num<=1)
		return 0;
	else if(num==2)
		return 1;
	else if(num>2 && num%2==0)
		return 0;
	else 
		for(i=3;i<=floor(sqrt(num));i=i+2)
			if(num%i==0){
				val=0;
				break;
			}
	return val;
}
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf(isPrime(num)?"%d is prime.":"%d is not prime.",num);
}
