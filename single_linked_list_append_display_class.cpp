//Singly Linked List where each node holds a float
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
          ~SLL() { };              // destructor
          void appendNode (float);// prototype append function to add the node to the end of list
          void displayList();    // traversing the list and dipslying the data in each node
};
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
  cout<<"\nDispay of value stored in each node after appending two more nodes"<<endl<<endl;
  list.displayList();
  cin.get();
  return 0;
 }
