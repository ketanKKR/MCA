#include<stdio.h>
#include<conio.h>
#include<string.h>
#define size 50

char stack[size];
int top=-1;
int curr_pos=-1,last_pos=-1;
int isp(char);		//Incoming stack priority
int icp(char);		//Incoming priority
void output(char,char opstr[]);

//Global Declaration
void push(char symbol);
char pop();
char readSymbol(char []);
void infix_2_postfix(char infix[], char opstr[]);

//Main function
int main(){
	int i;
	char infix[20],opstr[20];
	
	strcpy(opstr,"");

	printf("Enter Infix String: ");
	scanf("%s",infix);

	for(i=0;infix[i]!='\0';i++);

	infix[i]=')';
	infix[i+1]='\0';

	printf("\nInfix Expression is: %s",infix);

	infix_2_postfix(infix,opstr);
	printf("\nOutput is: %s",opstr);

	return 0;
}

void push(char symbol){
	top++;
	stack[top]=symbol;
}

char pop(){
	char symbol;
	symbol=stack[top];
	top--;
	return symbol;
}

char readSymbol(char infix[]){
	curr_pos=curr_pos+1;
	return (infix[curr_pos]);
}

int isp(char x){
	int value;
	switch(x){
		case '+':
		case '-':
			value=2;
			break;
		case '*':
		case '/':
			value=4;
			break;
		case '^':
			value=5;
			break;
		case '(':
			value=0;
			break;
		default:
			value=8;
			break;

	}
	return(value);
}

int icp(char x){
	int value;
	switch(x){
		case '+':
		case '-':
			value=1;
			break;
		case '*':
		case '/':
			value=3;
			break;
		case '^':
			value=6;
			break;
		case '(':
			value=9;
			break;
		case ')':
			value=0;
			break;
		default:
			value=7;
			break;

	}
	return(value);
}

void output(char symbol,char opstr[]){
	last_pos=last_pos+1;
	opstr[last_pos]=symbol;
	opstr[last_pos+1]='\0';
}

void infix_2_postfix(char infix[], char opstr[]){
	char item,x;
	push('(');

	printf("\nRead Symbol\tStack\t\tOutput");

	while(top>=0){
		item=readSymbol(infix);
		x=pop();

		if((item>=97 && item<=122) || (item>=65 && item<=90)){
			push(x);
			output(item,opstr);
		}
		else if(item==')'){
			while(x!='('){
				output(x,opstr);
				x=pop();
			}
		}
		else if(isp(x)>=icp(item)){
			while(isp(x)>=icp(item)){
				output(x,opstr);
				x=pop();
			}
			push(x);
			push(item);
		}
		else if(isp(x)<icp(item)){
			push(x);
			push(item);
		}
		printf("\n%c\t\t%s\t\t%s",item,stack,opstr);
	}
}