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
bool Binaryfull(BSTNode*root){
	if(root==NULL)
	return true;

	if(root->left==NULL&&root->right==NULL)
	return true;
   if((root->left)&&(root->right))
   return (Binaryfull(root->left)&&Binaryfull(root->right));
   return false;
}

int main(){
	BSTNode*root=CreateNode(7);
	root->left=CreateNode(5);
	root->right=CreateNode(9);
	root->left->left=CreateNode(12);
	root->left->right=CreateNode(11);
	root->right->left=CreateNode(23);
	root->right->right=CreateNode(26);
	root->right->left->left=CreateNode(56);
	cout<<"PRINT ALL NODE"<<endl;
	cout<<Binaryfull(root)<<endl;
	return 0;
}
