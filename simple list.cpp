#include<iostream>
using namespace std;

struct Node{
	float value;
	struct Node*next;
	};
	void printList(struct Node *n);
	int main(){
		Node*head=NULL;
		Node*second=NULL;
		Node*third=NULL;
		head=new Node;
		second=new Node;
		third=new Node;
		head->value=6;
		head->next=second;
		
		second->value = 2;
       second->next = third;
       
       third->value= 12;
        third->next =NULL;
        printList(head);
        return 0;
        
	}
	

void printList(struct Node *n)
{
  while (n != NULL)
  
    {cout<<n->value<<endl;
     n = n->next;}

}
