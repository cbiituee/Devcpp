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
        ListNode *next1 = new ListNode;
   head = next1;
   head -> enrlNo = 900013;
   strcpy(head -> name, "Vikram Raj");
   strcpy(head -> branch, "BIO TECH");
   head -> CGPA = 6.5;
   cout<<head -> enrlNo<<'\t'<<head -> name<<'\t'
       <<head -> branch<<'\t'<<head -> CGPA<<endl;
       
     ListNode *next2 = new ListNode;
   head = next2;
   head -> enrlNo = 900014;
   strcpy(head -> name, "DHEERAJ");
   strcpy(head -> branch, "GEO TECH");
   head -> CGPA = 1.5;
   cout<<head -> enrlNo<<'\t'<<head -> name<<'\t'
       <<head -> branch<<'\t'<<head -> CGPA<<endl;
         
   
   cin.ignore();
   cin.get();
   return 0;
  }
