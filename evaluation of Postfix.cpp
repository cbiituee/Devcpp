#include<iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
 using namespace std;
struct Stack{
	int top;
	int size ;
	char* array;
};
struct Stack* createstack(int size){
	struct Stack*stack=new Stack[size];
	stack->top=-1;
	stack->size=size;
	stack->array= new char [stack->size];
	return stack;
}

int isFull(struct Stack*stack)
{	return stack->top==stack->size-1; }

int isEmpty(struct Stack*stack)
{ return stack->top==-1;  }

void push(struct Stack *stack,int item){
	if(isFull(stack))
	return;
		stack->top=stack->top+1;
		stack->array[stack->top]=item;
		//cout<<"element no "<<stack->top<<"is "<<stack->array[stack->top]<<endl;
	}
	char pop(struct Stack*stack){
		if(isEmpty(stack))
		return 0;
		return stack->array[stack->top--];
		
	}
	char peek(struct Stack*stack){
	return stack->array[stack->top];
}

bool isOperand(char C){
		if(C >= '0' && C <= '9') return true;
	
	return false;}

    int evaluatePostfix(char* exp){
    	struct Stack*stack=createstack(strlen(exp));
    	int i=0;
    	int n=strlen(exp);
    	if(!stack)
    	return -1;
    	else
    	for(int i=0;i<n;i++){
    		if(isOperand(exp[i]))
            push(stack,exp[i]-'0') ;
			else{
				int val1=pop(stack);
				int val2=pop(stack);
				switch (exp[i])
            {
             case '+': push(stack, val2 + val1); break;
             case '-': push(stack, val2 - val1); break;
             case '*': push(stack, val2 * val1); break;
             case '/': push(stack, val2/val1);   break;
            }
          }
    }
    return pop(stack);
	}
	int main(){
		char*exp="231+*45-78*-+";
		cout<<"Evaluation of postfix"<<endl;
		cout<<evaluatePostfix(exp)<<endl;
		return 0;
	}
    
			 		

