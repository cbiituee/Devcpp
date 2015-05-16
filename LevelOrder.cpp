#include<iostream>
#include<queue>
#include<Stack>
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
void Levelorder(BSTNode*root){
	queue<BSTNode*>Q;
	Q.push(root);
	while(!Q.empty())
	{ BSTNode*temp=Q.front();
	cout<<temp->data<<endl;
	if(temp->left!=NULL) Q.push(temp->left);
	if(temp->right!=NULL) Q.push(temp->right);
	Q.pop();
	}
	
	
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
	Levelorder(root);
	return 0;
}
