#include<iostream>
using namespace std;
struct BSTNode{
	int data;
	BSTNode*left;
	BSTNode*right;
};
BSTNode*CreateNode(int x){
	BSTNode*ptr=new BSTNode();
	ptr->data=x;
	ptr->left=NULL;
	ptr->right=NULL;
	return ptr;
}
BSTNode*insert(BSTNode*root,int x){
	if(root==NULL){
	root=CreateNode(x); }
	else if (x<=root->data){
	root->left=insert(root->left,x);}
	else
	{
		root->right=insert(root->right,x);}
	

	return root;
}
 void Inorder(BSTNode*root){
 	if(root==NULL) return;
 	 Inorder(root->left);
 	 cout<<"data : "<<root->data<<endl;
 	 Inorder(root->right);
 }
 void Preorder(BSTNode*root){
 	if(root==NULL) return;
 	 cout<<"data : "<<root->data<<endl;
 	 Preorder(root->left);
 	 Preorder(root->right);
 }
 void Postorder(BSTNode*root){
 	if(root==NULL) return;
 	
 	 Postorder(root->left);
 	 Postorder(root->right);
 	  cout<<"data : "<<root->data<<endl;
 }
 int Findmin(BSTNode*root)
{  BSTNode*current=root;
while(current->left!=NULL){
	current=current->left;
}
return current->data;
 } 
  int Findmax(BSTNode*root)
{  BSTNode*current=root;
while(current->right!=NULL){
	current=current->right;
}
return current->data;
 } 
int main(){
	BSTNode*root=NULL;
	root=insert(root,20);
	root=insert(root,15);
	root=insert(root,21);
	root=insert(root,32);
	root=insert(root,13);
	root=insert(root,16);
	root=insert(root,22);
			root=insert(root,12);
				root=insert(root,10);
	Inorder(root);
	cout<<"Preorder "<<endl;
	Preorder(root);
	cout<<"Post order"<<endl;
	Postorder(root);
	cout<<"min"<<endl;
	cout<<Findmin(root)<<endl;
	cout<<"max"<<endl;
	cout<<Findmax(root)<<endl;
	return 0;
}
