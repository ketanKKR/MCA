#include<stdio.h>
#include<conio.h>
#include<string.h>

#define size 25

int stack[size];

void push(int vl);
int pop();
int top=-1;

int main(){
	char post[25],temp[25];
	int val,val1,val2,i;
	
	printf("\nEnter postfix expression: ");
	scanf("%s",post);

	strcpy(temp,post);
	printf("\nTemp: %s",temp);
	for(i=0;post[i];i++){
		if((post[i]>='a')&&(post[i]<='z')||(post[i]>='A')&&(post[i]<='Z')){
			printf("\nEnter value for %c: ",post[i]);
			fflush(stdin);
			scanf("%c",&temp[i]);
		}
	}
	printf("\nTemp String: %s",temp);

	for(i=0;post[i];i++){
		if((post[i]>='a') && (post[i]<='z') || (post[i]>='A') && (post[i]<='Z')){
			push(temp[i]-48);
		}
		else{
			val2=pop();
			val1=pop();

			if(post[i]=='+'){
				val=val1+val2;
			}
			if(post[i]=='-'){
				val=val1-val2;
			}
			if(post[i]=='*'){
				val=val1*val2;
			}
			if(post[i]=='/'){
				val=val1/val2;
			}
			push(val);
		}
	}

	printf("\nPost-fix expression is: %s\n",post);
	printf("Answer: %d\n",pop());

	return 0;
}

void push(int val){
	top++;
	stack[top]=val;
}

int pop(){
	top--;
	return stack[top+1];
}