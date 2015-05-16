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

int main(){
	BSTNode*root=NULL;
	root=insert(root,20);
	root=insert(root,15);
	root=insert(root,21);
	root=insert(root,32);
	int number;
	cout<<"put number to be search"<<endl;
	cin>>number;
	if(search(root,number)==true)
	cout<<"number is found"<<endl;
	else 
	cout<<"not found"<<endl;
	
	return 0;
}
