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
	return stack;
	
}

 
int isEmpty(struct StackNode *root)
{
    return !root;
}
 
void push(struct StackNode** root, int data)
{
    struct StackNode* stackNode = new StackNode;
    stackNode->next = *root;
    *root = stackNode;
    printf("%d pushed to stack\n", data);
}
 
int pop(struct StackNode** root)
{
    if (isEmpty(*root))
        return INT_MIN;
    struct StackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
 
    return popped;
}
 
int peek(struct StackNode* root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}
 
int main()
{
    struct StackNode* root =NULL;
 
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
 
    printf("%d popped from stack\n", pop(&root));
 
    printf("Top element is %d\n", peek(root));
 
    return 0;
}
