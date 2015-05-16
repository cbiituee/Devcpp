#include<iostream>
using namespace std;
struct Stack{
	int top;
	int size ;
	int* array;
};
struct Stack* createstack(int size){
	struct Stack*stack=new struct Stack[size];
	stack->size=size;
	stack->top=-1;
	stack->array=new int  [stack->size];
	
}	void push(struct Stack *stack,int item){
		stack->top=stack->top+1;
		stack->array[stack->top]=item;
	}
	int pop(struct Stack*stack){
		return stack->array[stack->top--];
		
	}
	
	int isEmpty(struct Stack*stack){
		return stack->top==-1;
	}
	int isFull(struct Stack*stack){
		return stack->top==stack->size-1;
	}
	int peek(struct Stack*stack){
		if(isEmpty(stack))
		return 0;
		return stack->array[stack->top];
	}
	int main(){
		struct Stack*stack;
		stack=createstack(80);
		push(stack,10);
		push(stack,15);
		push(stack,78);
		push(stack,70);
		cout<<"Pop start "<<pop(stack)<<endl;
		cout<<"Peek"<<endl;
		cout<<"peek value"<<peek(stack)<<endl;
		return 0;
}

