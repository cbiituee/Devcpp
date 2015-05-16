#include<iostream>
using namespace std;
 
struct node
{
    int data;
    struct node* left, *right;
};
 
struct node* newNode(int data)
{
    struct node* node1 = new node;
    node1->data = data;
    node1->left = node1->right = NULL;
    return(node1);
}
 
void printInoder(struct node*root)
{
    if (root != NULL)
    {
        printInoder(root->left);
       cout<<root->data<<endl;
        printInoder(root->right);
    }
}
 
node* Deletenode(node*root){
	if(root==NULL) return NULL;
		root->left=Deletenode(root->left);
		root->right=Deletenode(root->right);
	if(root->left==NULL&&root->right)
	{ return root ;}
	
	  if (root->left==NULL)
    {
         node*new_root = root->right;
        delete (root); // To avoid memory leak
        return new_root;
    }
    if (root->right==NULL)
    {
     node*new_root1= root->left;
        delete (root); // To avoid memory leak
        return new_root1;
    }
  return root; 
}
int main(void)
{
    struct node*NewRoot=NULL;
    struct node *root = newNode(2);
    root->left        = newNode(7);
    root->right       = newNode(5);
    root->left->right = newNode(6);
    root->left->right->left=newNode(1);
    root->left->right->right=newNode(11);
    root->right->right=newNode(9);
    root->right->right->left=newNode(4);
 
    printf("Inorder traversal of given tree \n");
    printInoder(root);
 
    NewRoot = Deletenode(root);
 
    printf("\nInorder traversal of the modified tree \n");
    printInoder(NewRoot);
    return 0;
}
