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
		void displaylist();	
		void insert(float,int);
		void Delete(int);
		float Get(int);
		void reverse(struct Node* head);
};


void SLL::displaylist(){
	Node*nodeptr;
	nodeptr=head;

	while(nodeptr!=NULL){
		cout<<nodeptr->value<<endl;
		nodeptr=nodeptr->next;
	}}

void SLL:: insert(float x,int n){
	struct Node*newnode;
	newnode=new Node;
	newnode->value=x;
	newnode->next=NULL;
	if(n==1){newnode->next=head;
	head=newnode;
	return ;
	}
	Node*temp=head;
	for(int i=0;i<n-2;i++){
		temp=temp->next; //n-1 node
	}
	newnode->next=temp->next;//n node+
	
	temp->next=newnode;
	
}
float SLL::Get(int n)
{
	struct Node*newnode=head;
	for(int i=0;i<n-1;i++){
		newnode=newnode->next;
	}
	return newnode->value;
}
void SLL::Delete(int n){
	struct Node*temp=head;
	if(n==1){head=temp->next;
	delete temp;
	return;	
	}
	for(int i=0;i<n-2;i++)
	{  temp=temp->next;	}//n-1node
	struct Node* temp1=temp->next;//nth node
	temp->next=temp1->next;//n+1 th node

	delete temp1;
	
	}
	void SLL::reverse(struct Node*head)
	{ struct Node*current,*prev,*NEXT;
	  prev = NULL;
	 current=head;
	 while(current!=NULL)
		{NEXT=current->next;
		current->next=prev;
		prev=current;
		current=NEXT;
		}
		head=current;
	}
	

int main(){
	SLL list;
	Node*head =NULL;
	list.insert(3,1);
	list.insert(2,2);
	list.insert(6,2);
	list.insert(5,3);
     cout<<"Display of value stored in List "<<endl;
	list.displaylist();
    list.Delete(3);
	list.insert(7,1);
	cout<<endl;
	list.displaylist();
//	list.reverse(head);
	cout<<"Display of nth value  "<<	list.Get(3)<<endl;
	//	list.reverse();
			cout<<"Display after reverse "<<endl;
				list.displaylist();
			

	return 0;	
}
