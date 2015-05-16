#include<iostream>
using namespace std;
struct Node{
	float value;
	struct Node*next;
};
class SLL{
 private :
			Node *head;
		public:
		
			SLL(){
				head=NULL;}
			~SLL(){	};
		void displaylist(struct Node**);	
		void insert(struct Node**,float,int);
		void Delete(struct Node**,int);
		float Get(struct Node**, int);
		void print(struct Node*);
		struct Node* reverse(struct Node*head)
	{ struct Node*current,*prev,*NEXT;
	  current=head;
	  prev = NULL;
	  while(current!=NULL)
		{NEXT=current->next;
		current->next=prev;
		prev=current;
		current=NEXT;
		}
	head=prev;
	return head;	}
};


void SLL::displaylist(struct Node**head){
	Node*nodeptr;
	nodeptr=*head;

	while(nodeptr!=NULL){
		cout<<nodeptr->value<<endl;
		nodeptr=nodeptr->next;
	}}

void SLL:: insert(struct Node**pointerhead,float x,int n){
	struct Node*newnode;
	newnode=new Node;
	newnode->value=x;
	newnode->next=NULL;
	if(n==1){newnode->next=*pointerhead;
	*pointerhead=newnode;
	return ;
	}
	Node*temp=*pointerhead;
	for(int i=0;i<n-2;i++){
		temp=temp->next; //n-1 node
	}
	newnode->next=temp->next;//n node+
	
	temp->next=newnode;
	
}
float SLL::Get(struct Node**pointerhead,int n)
{
	struct Node*newnode=*pointerhead;
	for(int i=0;i<n-1;i++){
		newnode=newnode->next;
	}
	return newnode->value;
}
void SLL::Delete(struct Node**pointerhead ,int n){
	struct Node*temp=*pointerhead;
	if(n==1){*pointerhead=temp->next;
	delete temp;
	return;	
	}
	for(int i=0;i<n-2;i++)
	{  temp=temp->next;	}//n-1node
	struct Node* temp1=temp->next;//nth node
	temp->next=temp1->next;//n+1 th node

	delete temp1;
	
	}

	void SLL::print(struct Node* ptr){
		if(ptr==NULL) return;

		print(ptr->next);
		cout<<ptr->value<<endl;
		
	}

int main(){
	SLL list;
	Node*head =NULL;
	list.insert(&head,3,1);
	list.insert(&head,2,2);
	list.insert(&head,6,2);
	list.insert(&head,5,3);
    // cout<<"Display of value stored in List "<<endl;
	//list.displaylist(&head);
   // list.Delete(&head,3);
list.insert(&head,7,1);
cout<<endl;
		//	cout<<"Display  reverse "<<endl;
				list.displaylist(&head);
				cout<<endl;
			//	cout<<list.Get(&head,3)<<endl;
	
		cout<<endl;
			//	head=list.reverse(head);			
			//	list.displaylist(&head);
cout<<"print function"<<endl;
 list.print(head);
	return 0;	
}
