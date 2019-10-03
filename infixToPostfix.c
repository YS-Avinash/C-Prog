#include<stdio.h>
int counter,capacity=0;
char stack[20];
int openParanthesis='(',closedParanthesis=')',asterisk='*',div='/',plus='+',diff='-';
void weightedPop();
void pop(char);
int getWeight(char);
void push(char);
void precedenceValidate(char);
void display(char);
int main(){
	int len;
	char expr[50];
	stack[0]='(';
	printf("Enter your infix expression : ");
	scanf("%[^\n]s",&expr);
	len=strlen(expr);
	expr[len]=')'; 
	expr[len+1]='\0';  
	printf("Your Postfix expression is ");
	for(counter=0;expr[counter]!='\0';counter++){
		int currentChar=expr[counter];
	    if(currentChar!=openParanthesis&&currentChar!=closedParanthesis&&currentChar!=asterisk&&currentChar!=div&&currentChar!=plus&&currentChar!=diff)
		   display(currentChar);
		else if(currentChar=='(')
		   push(currentChar);
		else if(currentChar==')')
			weightedPop();
		else 
		   precedenceValidate(currentChar);      
	}
	printf("\n");
}
void display(char ch){
	printf("%c",ch);
}
void push(char x){
	capacity++;
	stack[capacity]=x;
}
void pop(char x){
		display(x);
		capacity--;
}
void precedenceValidate(char z){
     int x,y;
	 x=getWeight(z);
	 y=getWeight(stack[capacity]);    	
     if(x>y)
       push(z);
     else{
     	while(1){
     	  pop(stack[capacity]);
     	  x=getWeight(z);
     	  y=getWeight(stack[capacity]);
     	  if(x>y)
     	    break;
     	}
     	counter=counter-1;
     }	   
}
int getWeight(char ch){
	switch(ch){
		case '*':
		case '/':return 2;
		case '+':
		case '-':return 1;
		default:return 0;
	}
}
void weightedPop(){
	while(stack[capacity]!='('){
		pop(stack[capacity]);
	}
	capacity--;
}
