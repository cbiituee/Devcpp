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
		void Reverse(struct Node**);
		void printmiddle(struct Node**);
		
		
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
	void SLL::Reverse(struct Node** head_ref)
{
    struct Node* first;
    struct Node* rest;
      
    /* empty list */
    if (*head_ref == NULL)
       return;   
 
    /* suppose first = {1, 2, 3}, rest = {2, 3} */
    first = *head_ref;  
    rest  = first->next;
 
    /* List has only one node */
    if (rest == NULL)
       return;   
 
    /* reverse the rest list and put the first element at the end */
    Reverse(&rest);
    first->next->next  = first;  
     
    /* tricky step -- see the diagram */
    first->next  = NULL;          
 
    /* fix the head pointer */
    *head_ref = rest;              
}

	/*void SLL::Reverse(struct Node*ptr){
		if(ptr==NULL) {
			head=ptr;
			return;
		}
         	Reverse(ptr->next);
         	struct Node* q=ptr->next;
         	q->next=ptr;
         	ptr->next=NULL;
		
	}*/
void SLL::printmiddle(struct Node**head){
	struct Node* fastptr;
	struct Node* slowptr;
	int cnt=0;
	fastptr=*head;
	slowptr=*head;
	cout<<"bjbkjh"<<slowptr->value<<endl;
	cout<<endl;
	while(fastptr!=NULL&&fastptr->next!=NULL)
	{ fastptr=fastptr->next->next;
		slowptr=slowptr->next;
	cout<<"fast ptr value : "<<fastptr->value<<endl;
	cout<<"slow ptr value : "<<slowptr->value<<endl;

	cnt++;
	}
	cout<<"the valuse of middle one is "<<slowptr->value<<endl;
	cout<<"cnt is"<<cnt<<endl;
}
int main(){
	SLL list;
Node*head =NULL;
	list.insert(&head,3,1);
	list.insert(&head,2,2);
	list.insert(&head,6,2);
	list.insert(&head,5,3);
     list.insert(&head,7,1);
     list.insert(&head,8,3);
     list.insert(&head,9,3);
cout<<endl;
	
list.displaylist(&head);
list.Reverse(&head);
cout<<endl;
list.displaylist(&head);
cout<<endl;
list.printmiddle(&head);
	return 0;	
}
