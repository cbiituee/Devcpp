#include<iostream>
using namespace std;

class Node  
{
  public:
  int data;
  Node *next; // 2 marks
};

class SLL     
{
  private:
           Node *head;                 
  public: 
          SLL ()
          { head = new Node;
                    head-> data = 0;
                    head-> next = NULL;
          }// 2 marks     
          ~SLL(); // 5 marks                  
          void insert(int); // 6 marks       
          void delBeg(); // 6 marks         
          void displayList(); // 4 marks    
}; 
//Destructor
SLL::~SLL()
{
    Node *nodePtr, *nextNode;
    nodePtr = head;
    while (nodePtr != NULL)
        {
         nextNode = nodePtr->next;
         delete nodePtr;
         nodePtr = nextNode;
        }
    cout<<"Destructor called"<<endl;
}      
//definition of member function insert to append Node
void SLL :: insert(int number)
  {
   Node *newNode; // specialNode and newNode pointer to allocate and point to the special node and new node respectively
   Node *nodePtr; // nodePtr pointer to travel down the linked list, in search of last node
   // Allocate a new node and store number
   newNode = new Node; 
   newNode -> data = number;
   newNode -> next = NULL;
   head->data++;
   nodePtr = head;
     //Find the last node in the list
     while (nodePtr -> next)
       nodePtr = nodePtr -> next;
     //Insert newNode as the last node
       nodePtr -> next = newNode;
  
  }

void SLL::delBeg()//function definition for deleting the first data node (non-special node) in the beginning of the list
{
	cout<<"The list before deletion of beginning node:"<<endl;
	displayList();
	cout << "The list after one deletion is " << endl;
	Node *nodePtr;
	nodePtr =head->next;
	if(head->data == 0)
	{
		cout<<"No data is present..\n";
	}
    else
    { 
        head->next = nodePtr->next; 
        delete nodePtr;
        
        head->data--;  
     }    
}
//Traversing or travelling through a linked list 
void SLL :: displayList()
{
        Node *nodePtr; 
        nodePtr = head->next;          // Assign a list head to nodePtr
        if (head ->data == 0)
         {
          cout<<"\aList is Empty"<<endl;
          return;
         }
        int listpos=1;
        while(nodePtr != NULL ) //&& nodePtr->data >0)   
         {
         cout<<"Value no. "<<listpos<< " in the list is ";
         cout<<nodePtr->data<<endl;    // display the data of the Node
         nodePtr = nodePtr -> next;   //  Assign node member to its own next member
         listpos++;  
         }
         cout<<"Length of the list is "<<head->data<<endl;
}                                          
int main(){
 {
  SLL list; // list is an object of class SLL
  list.displayList();
 
  list.insert(11); 
  list.insert(32);
  list.insert(25);
  list.displayList();
  list.insert(300);
  list.displayList();
  
  
   list.delBeg();
   list.delBeg();
   list.delBeg();
   //list.delBeg();
   list.displayList();
  }

cin.get();  
return 0;
}
