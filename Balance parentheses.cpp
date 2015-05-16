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

bool isEmpty(struct Stack*stack)
{ if (stack->top==-1)
 return true;
 else 
 return false;
 }

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
		return stack->array[stack->top--];}
bool Pair(char opening,char closing)
{  if(opening == '(' && closing == ')') return true;
   else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}
char peek(struct Stack*stack){
	return stack->array[stack->top];
}
	bool Checkbraces(char*exp){
		struct Stack*stack =createstack(strlen(exp));
		int n=strlen(exp);
		if(!stack)
		return false;
		else 
		for(int i=0;i<n;i++)
		{ if (exp[i]=='('||exp[i]== '[' || exp[i] == '{')
		 push(stack,exp[i]);
		 else if (exp[i]==')'||exp[i]== ']' || exp[i] == '}' )
		 { if(isEmpty(stack)||!Pair(peek(stack),exp[i]))
		  return false;
		  else 
		  pop(stack);
		 
		 }
		 
		} 	return isEmpty(stack) ? true:false;
			
			}
int main(){
	 char exp[] = "[(a+b)-(a+c)()";
	 cout<<exp<<endl;
    
    cout<<Checkbraces(exp)<<endl;
    return 0;
}
