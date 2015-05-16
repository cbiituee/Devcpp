#include<iostream>
using namespace std;
struct Node{
	float value;
	struct Node*next;
};
class SLL{
	private:
		Node *head;
		public:
			SLL(){
				head=NULL;}
			~SLL(){	};
			void appendNode(float);
			void displaylist();
			void headinsert(float );
			void insert(float,int);
			void Delete(int);
};

void SLL::appendNode(float number){
	Node*newNode;
	Node*nodeptr;
	newNode=new Node;
	newNode->value=number;
	newNode->next=NULL;
	if(head==NULL)
		head=newNode;
	
	else 
	{nodeptr=head;
	while(nodeptr->next)
	{
	nodeptr=nodeptr->next;}
	nodeptr->next=newNode;
	
	}
}
void SLL::displaylist(){
	Node*nodeptr;
	nodeptr=head;

	while(nodeptr!=NULL){
		cout<<nodeptr->value<<endl;
		nodeptr=nodeptr->next;
	}
}

void SLL::headinsert( float data)
{
    struct Node* new_node;
    new_node=new Node;
    /* 2. put in the data  */
    new_node->value = data;
  
    /* 3. Make next of new node as head */
    new_node->next = head;
    head=new_node;
  
}
void SLL:: insert(float x,int n){
	struct Node*newnode;
	newnode=new Node;
	newnode->value=x;
	newnode->next=NULL;
	if(n==1){newnode->next=head;
	head=newnode;
	return;
	}
	Node*temp=head;
	for(int i=0;i<n-2;i++){
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void SLL::Delete(int n){
	struct Node*temp=head;
	if(n==1){head=temp->next;
	delete temp;
	return;	
	}
	for(int i=0;i<n-2;i++)
	{  temp=temp->next;	}
	struct Node*temp1=temp->next;
	temp=temp1->next;
	delete temp1;
	
}

int main(){
	SLL list;
	Node*head =NULL;

	list.appendNode(3.4);
	list.headinsert(6.7);
	list.appendNode(4.4);
	list.headinsert(7.7);
	list.insert(6,3);
	cout<<"Display of value stored in List "<<endl;
	list.displaylist();

	list.Delete(3);
	
	cout<<"Display of value after delete List "<<endl;
	list.displaylist();

	
	return 0;
	
}
