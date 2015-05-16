const int STRING_SIZE = 70;
struct ListNode
 {
  char name[STRING_SIZE];
  int enrlNo;
  char branch[STRING_SIZE];
  float CGPA;
  ListNode *link;
 };
 #include <iostream>
 #include <cstring>
 using namespace std;
 int main()
  {
   ListNode *head;
   head = new ListNode;     
   head -> enrlNo = 900011;
   strcpy(head -> name, "Ashok Gupta");
   strcpy(head -> branch, "CST");
   head -> CGPA = 6.5;
   cout<<head -> enrlNo<<'\t'<<head -> name<<'\t'
       <<head -> branch<<'\t'<<head -> CGPA<<endl;
   ListNode *next = new ListNode;
   head = next;
   head -> enrlNo = 900012;
   strcpy(head -> name, "Nikhil Chhabra");
   strcpy(head -> branch, "EE");
   head -> CGPA = 7.5;
   cout<<head -> enrlNo<<'\t'<<head -> name<<'\t'
       <<head -> branch<<'\t'<<head -> CGPA<<endl;
   
   cin.ignore();
   cin.get();
   return 0;
  }
