//Singly Linked List with destructor and delete a particular node
#include<iostream>
using namespace std;

class Node      // declaration of data structure for Node
{
  public:
  float value; // first member Node structure is float named value
  Node *next; // second member is a pointer named next

/* 
next pointer can hold address of any object that is a Node structure
this allows each Node structure to point to the next Node structure in the list
Node structure having pointer to an object of same type is as being declared

Since the Node structure contains a pointer to an object of the same type as that being
declared, it is known as self-refrential data structure. This makes it possible to create
nodes that point to other nodes of the same type.
*/           
}; // structre decralation ends here

class SLL     // class SLL decralation
{
  private:
           Node *head;                 // head pointer
  public: 
           SLL (){ head = NULL;}     //constructor initializes head pointer to NULL
                                    // to establish empty list
          ~SLL();              // destructor
          void appendNode (float);// prototype of append function to add the node to the end of list
          void insertNode (float);// prototype of insertNode function to add node at correct order
          void deleteNode (float);//prototype of deleteNode function to delete a particular Node
          void displayList();    // traversing the list and dipslying the data in each node
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
         //cout<<"Destructor called"<<endl;
         nodePtr = nextNode;
        }
}        
//definition of deleteNode function
void SLL::deleteNode(float number)
{
    Node *nodePtr, *previousNode;
    //If the list is empty, do nothing
    if(head==NULL)
      return;
    if(head -> value == number)
    { 
        nodePtr = head->next;
        delete head;
        head= nodePtr;
     }    
else
    {
        //Initialize nodePtr to head of list
        nodePtr = head;
        // Skip all nodes whose value member is not equal to number
        while(nodePtr !=NULL && nodePtr->value != number)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        //Link the previous node to the node after nodePtr, then delete nodePtr
        previousNode->next = nodePtr->next;
        delete nodePtr;
    }
}        
//definition of inserNode function
void SLL::insertNode(float number)
{
    Node *newNode, *nodePtr,*previousNode;
   // Allocate a new node and store number
   newNode = new Node; 
   newNode -> value = number;
   
   // If there are no nodes in the list, make newNode the first node
   if (head == NULL)
     { head = newNode; 
      newNode->next = NULL;
     } 
   // If nodes exist in the list and insert the value less than all nodes' values
   if (head != NULL && number < head->value) 
   { 
     newNode->next=head;
     head = newNode;  
   }      
   else  //otherwise insert newNode at the correct order
    {
     //Initialize nodePtr to head of list
     nodePtr = head; 
     
     //Skip all nodes whose value is less than number
     while (nodePtr !=NULL && nodePtr->value < number)
      {
          previousNode =  nodePtr;
          nodePtr      = nodePtr -> next;
      }
      //If the new node is to be the first in the list    
     //Insert newNode as before all nodes
       if (previousNode == NULL)
       {
           head = newNode;
           newNode->next = nodePtr;
       }
       else //Otherwise, insert it after the previous node
       { 
        previousNode->next = newNode;
        newNode->next = nodePtr;
       }    
       
   }       
}        
//definition of appendNode function
void SLL :: appendNode (float number)
  {
   Node *newNode; // newNode pointer to allocate and point to the new node
   Node *nodePtr; // nodePtr pointer to travel down the linked list, in search of last node
   // Allocate a new node and store number
   newNode = new Node; 
   newNode -> value = number;
   newNode -> next = NULL;
   
   // If there are no nodes in the list, make newNode the first node
   if (head == NULL)
   head = newNode;  
   else  //otherwise insert newNode at the end
    {
     //Initialize nodePtr to head of list
     nodePtr = head; 
     
     //Find the last node in the list
     while (nodePtr -> next)
       nodePtr = nodePtr -> next;
     //Insert newNode as the last node
       nodePtr -> next = newNode;
     }
  }
//Traversing or tavelling through a linked list 
void SLL :: displayList ()
 {
        Node *nodePtr; 
        nodePtr = head;          // Assign a list head to nodePtr
        while(nodePtr != NULL)   
         {
           cout<<nodePtr -> value<<endl; // display the value member of the Node
           nodePtr = nodePtr -> next;   //  Assign node member to its own next member
         }
  }                                                
int main()
 {
  SLL list; // list is an object of class SLL
  list.appendNode (22.2);        
  list.appendNode (38.9);
  list.appendNode (45.4);
  cout<<"Display of value stored in each node"<<endl;
  list.displayList();
  list.appendNode(50.5);
  list.appendNode(68.6);
  cout<<"\nDisplay of value stored in each node after appending two more nodes"<<endl<<endl;
  
  list.displayList();
  list.insertNode(10.1);
  list.insertNode(49.9);
  cout<<"\nDisplay the list after inserting node at correct position"<<endl;
  list.displayList();
  list.deleteNode(38.9);
  list.deleteNode(68.6);
  list.deleteNode(10.1);
  cout<<"\nDisplay the list after deleting the node"<<endl;
  list.displayList();
  cin.get();
  return 0;
 }
