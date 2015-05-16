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
bool search(BSTNode*root,int x){
	if(root==NULL) return false;
	else if (root->data==x) return true;
	else if (x<=root->data)
{	return search(root->left,x);}
	else
	{
	return search(root->right,x);}
}
void inorder(BSTNode*root){
 	if(root==NULL) return ;
 	inorder(root->left);
 	 cout<<"data : "<<root->data<<endl;
 	 inorder(root->right);
 }
 
 BSTNode * minValue(BSTNode* root)
{
    BSTNode* current =root;
 
    /* loop down to find the leftmost leaf */
    while (current->left != NULL)
        current = current->left;
 
    return current;
}
BSTNode* Delete(BSTNode*root ,int key){
	if(root==NULL) return root;
	else if(key<root->data){
		root->left=Delete(root->left,key);
	}
	else if(key>root->data){
		root->right=Delete(root->right ,key);
	}
	else 
	{ //case1 no child
	if(root->left==NULL&&root->right)
	{  delete root;
	   root=NULL;}
	else if(root->left==NULL){ //right child
		BSTNode*temp=root;
		root=root->right;
		 delete temp;	}
	else if(root->right==NULL){ //right child
		BSTNode*temp=root;
		root=root->left;
		 delete temp;	}
	//CASE When thee is two child 
	else{ 
	BSTNode* temp=minValue(root->right);
	
 root->data=temp->data;
 root->right=Delete(root->right,temp->data);
	}
	
	}
	
	
	return root;
}

int main(){
	BSTNode*root=NULL;
	root=insert(root,24);
	root=insert(root,15);
	root=insert(root,25);
	root=insert(root,32);
	root=insert(root,19);
	root=insert(root,18);
	root=insert(root,14);
	root=insert(root,22);
	root=insert(root,21);
	
	cout<<"inorder traversal before deletion"<<endl;
	inorder(root);

	cout<<"after deletion "<<endl;
	Delete(root,19);
	inorder(root);
	return 0;
}
