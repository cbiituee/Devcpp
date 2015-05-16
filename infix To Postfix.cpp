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

int isEmpty(struct Stack*stack)
{ return stack->top==-1;  }

int isFull(struct Stack*stack)
{	return stack->top==stack->size-1; }

char peek(struct Stack*stack){
	return stack->array[stack->top];
}
char pop(struct Stack*stack){
	if (!isEmpty(stack))
	return stack->array[stack->top--];
	return 0;
	}
void push(struct Stack *stack,char item){
	if(isFull(stack))
	return;
		stack->top=stack->top+1;
		stack->array[stack->top]=item;
	}
bool isOperand(char C){
		if(C >= '0' && C <= '9') return true;
	if(C >= 'a' && C <= 'z') return true;
	if(C >= 'A' && C <= 'Z') return true;
	return false;}
	
int Prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
 
    case '*':
    case '/':
        return 2;
 
    case '^':
        return 3;
    default :
        return -1;
    }
    
}
int IsOperator(char C)
{
	
		return C == '+' || C == '-' || C == '*' || C == '/' || C== '^';
 
	return false;
}
char infixtopostfix(char*exp){
	int i,k;
	struct Stack*stack=createstack(strlen(exp));
	int n=strlen(exp);
	
	if(!stack)
	return -1;
	else
{
		for(i=0,k=-1;i<n;++i)
	{ if(isOperand(exp[i]))
	 exp[++k]=exp[i];
	 
	 else if(exp[i]=='(')
	 push(stack,exp[i]);
	 
	 else if(exp[i]==')'){
	 
	 while(!isEmpty(stack)&&peek(stack)!='(')
	 {
	 exp[++k]=peek(stack);
	 pop(stack);
	 }
     if (!isEmpty(stack)) {
            pop(stack);
}
}
	 else 
        {
            while (!isEmpty(stack) && Prec(exp[i]) <= Prec(peek(stack)))
               exp[++k] = pop(stack);
            push(stack, exp[i]);
        }
 
	 }
	 
	 while (!isEmpty(stack))
        exp[++k] = pop(stack );
 
	

         exp[++k] = '\0';
        }
}
int main(){
	 char exp[] = "a+b*(c^d-e)*(f+g*h)-i";
	 cout<<exp<<endl;
    infixtopostfix(exp);
    cout<<exp<<endl;
    return 0;
}
