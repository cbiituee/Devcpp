#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
using namespace std;
struct StackNode{
	int data;
	struct StackNode* next;
};
	
struct StackNode* createstack(int x){
	struct StackNode*stack=new StackNode;
	stack->data=x;
	stack->next=NULL;
	return stack;}

void push(struct StackNode**head,int x){
	struct StackNode*stack=createstack(x);
	stack->next=*head;
	*head=stack;
	cout<<stack->data<<" push to Stack"<<endl;
}
int isEmpty(struct StackNode*next){
	return !next;
}
int pop(struct StackNode**front){
if(isEmpty(*front))
return 0;
	struct StackNode*temp;
	temp=*front;
	*front=(*front)->next;
	cout<<"pop "<<temp->data<<endl;
	delete temp;
}
int peek(struct StackNode*head){
	if(isEmpty(head))
	return 0;
	return head->data;
	
}
int main(){struct StackNode* head=NULL;

	push(&head,10); 
	push(&head,11);
	push(&head,19);
	push(&head,16);
	push(&head,15);
	pop(&head);
	cout<<"peek function   "<<peek(head)<<endl;
	return 0;
}
