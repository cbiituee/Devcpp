#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 

using namespace std;
struct Stack{
	int top;
	int size ;
	int* array;
};
 
/*struct Stack* createstack(int capacity)
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->size= capacity;
    stack->top = -1;
    stack->array = (int*) malloc(stack->size * sizeof(int));
    return stack;
}*/
struct Stack* createstack(int size){
	struct Stack*stack=new Stack[size];
	stack->size=size;
	stack->top=-1;
	stack->array=new int [stack->size];
	return stack;
	
}	
	int isEmpty(struct Stack*stack){
		return stack->top==-1;
	}
	int isFull(struct Stack*stack){
		return stack->top==stack->size-1;
	}
void push(struct Stack *stack,int item){
	if(isFull(stack))
	return;
		stack->top=stack->top+1;
		stack->array[stack->top]=item;
		cout<<"element no "<<stack->top<<"is "<<stack->array[stack->top]<<endl;
	}
	int pop(struct Stack*stack){
		if(isEmpty(stack))
		return 0;
		return stack->array[stack->top--];
		
	}
	

	int peek(struct Stack*stack){
		if(isEmpty(stack))
		return 0;
		else
		return stack->array[stack->top];
	}
	int main(){
		struct Stack*stack=createstack(80);
		for(int i=1;i<50;i+=4)
		{
		push(stack,i);}
	
		cout<<"Pop start "<<pop(stack)<<endl;
		cout<<"Peek"<<endl;
		cout<<"peek value"<<peek(stack)<<endl;
		return 0;
}

