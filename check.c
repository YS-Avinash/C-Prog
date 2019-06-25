#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
/*int main(){
	int *a,k=1,m,i;
	char ch;
	a=(int *)calloc(k,sizeof(int));
	while(1){
		printf("Enter number:");
		scanf("%d",a+k-1);
		printf("\nDo you want to enter more(y/n)?");
		fflush(stdin);
		scanf("%c",&ch);
		if(ch=='n')
			break;	
		m=k-1;
		printf("%d ",*(a+m));
		k++;
		a=(void *)realloc(a,k*sizeof(int));	
	}
}/*
/*	 int i,n,m;
	 scanf("%d %d",&n,&m);
	 for (i = 0; i < m; ++i)
		printf("%d %d \n", i, power(n,i));
	 return 0;
}
int power(int base, int n)
{
	int i, p;
	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}*/
/*int main(){
	int i=0,j,a[50];
	while(1){
		scanf("%d",&a[i]);	
		if(a[i]==-1)
			break;
		i++;
	}
	for(j=0;j<i;j++)
		printf("%d ",a[j]);
}*/
int main(){
	int num=INT_MIN;
	printf("%d",&num);
}
