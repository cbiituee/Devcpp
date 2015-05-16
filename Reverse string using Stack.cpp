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
	stack->size=size;
	stack->top=-1;
	stack->array=new char [stack->size];
	return stack;
	
}
int isEmpty(struct Stack*stack){
		return stack->top==-1;
	}
	int isFull(struct Stack*stack){
		return stack->top==stack->size-1;
	}
void push(struct Stack *stack,char item){
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
	void reverse(char str[]){
		int n=strlen(str);
		//cout<<"n : "<<n<<endl;
		struct Stack*stack=createstack(n);
		for(int i=0;i<n;i++){
			push(stack,str[i]);
		}
		for(int i=0;i<n;i++)
		{ str[i]=pop(stack);
		}
		
		}
		int main(){
			char str[]="geeksforgeeks";
			cout<<"Real string"<<str<<endl;
			 reverse(str);	
			 cout<<"after reverse "<<str<<endl;
			 return 0;	 
			 
			 
			 
			 }
