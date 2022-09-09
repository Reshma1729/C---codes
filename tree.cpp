#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	struct Node *left, *right;
};

int temp;

Node *newnode(int data){
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void Printpreorder(struct Node *node){
	if(node==NULL)
	  return;
	cout<<node->data<<" ";
	Printpreorder(node->left);
	Printpreorder(node->right);
}

void PrintInorder(struct Node *node){
	if(node==NULL)
	  return;
	Printpreorder(node->left);
	cout<<node->data<<" ";
	Printpreorder(node->right);
}

void Printpostorder(struct Node *node){
	if(node==NULL)
	  return;
	Printpreorder(node->left);
	Printpreorder(node->right);
	cout<<node->data<<" ";
}

int main(){
	struct Node * root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	cout<<"Preorder : ";
	Printpreorder(root);
	cout<<"Inorder : ";
	PrintInorder(root);
	cout<<"Postorder : ";
	Printpostorder(root);
}
