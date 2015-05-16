//Singly Linked List where each node holds a float 
//Program to insert node in the beginning of the list
#include<iostream>
using namespace std;

class Node      // declaration of class for Node (here class is made instead of struct)
{
  public:
  float value; // first member Node structure is int named value
  Node *next; // second member is a pointer named named next
/* 
next pointer can hold address of any object that is a Node structure
this allows each Node structure to point to the next Node structure in the list
Node structure having pointer to an object of same type is as being declared
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
          void instBegNode (float number);// declaration of instbegNode at begnning of list
          void displayList();    // traversing the list and dipslying the data in each node
};
//function definition of inserting node in the beginning of the list
void SLL :: instBegNode (float number) // adding node in the beginning of the list
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
   else  //otherwise insert newNode at the beginning
    {
     //Initialize nodePtr to head
       nodePtr = head;
     //Now change the head pointer to newNode pointer
       head =  newNode; 
     //Now head->next still pointing to NULL changed to nodePTR
       head -> next = nodePtr;//newNode now has head as previous pointer and nodePtr as next pointer
     }
  }
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
        if (head == NULL)
           cout <<"\nLinked List is empty"<<endl;
        else
        { while(nodePtr != NULL)   
         { cout<<nodePtr -> value<<endl; // display the value member of the Node
           nodePtr = nodePtr -> next;   //  Assign node member to its own next member
         }
        }    
  }   
                                                                                    
int main()
 {
  SLL list; // list is an object of class SLL
  
  cout<<"\nDisplay of value stored in each node"<<endl;
  // will display list is empty, no nodes in list yet
  list.displayList(); 
  
  list.instBegNode(99.9);
  cout<<"\nDisplay of value stored in each node"<<endl;
  list.displayList();
  
  list.instBegNode(88.8);
  cout<<"\nDisplay of value stored in each node"<<endl;
  list.displayList();
  
  list.instBegNode(77.7);
  cout<<"\nDisplay of value stored in each node"<<endl;
  list.appendNode(10.1);
  list.displayList();
  
  cin.get();
  return 0;
 }
