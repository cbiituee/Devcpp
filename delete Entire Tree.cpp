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

void DeleteTree(BSTNode**root){
	if(*root==NULL) return;
	DeleteTree(&(*root)->left);
	DeleteTree(&(*root)->right);
	cout<<" data : "<<(*root)->data<<endl;
	delete (*root);
	*root=NULL;
}
void print(BSTNode*root){
	if (root==NULL) return ;
	print(root->left);
	print(root->right);
	cout<<root->data<<endl;
}
int main(){
	BSTNode*root=CreateNode(7);
	root->left=CreateNode(5);
	root->right=CreateNode(9);
	root->left->left=CreateNode(12);
	root->left->right=CreateNode(11);
	root->right->left=CreateNode(23);
	root->right->right=CreateNode(26);
 cout<<"print data"<<endl;
 print(root);
 cout<<"deletion "<<endl;
 DeleteTree(&root);
 cout<<"after deletion"<<endl;
 print(root);
	return 0;
}
