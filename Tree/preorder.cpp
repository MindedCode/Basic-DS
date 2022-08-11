#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node * l;
	struct Node * r;
	
	
	Node(int val)
	{
		data = val;
		l=NULL;
		r=NULL;
		
	}
};


void preorder(struct Node* root)
{
	
//	base con
	if(root==NULL)
		return;
	
	cout<<root->data<<" ";
	preorder(root->l);
	preorder(root->r);
}


//Main function
int main()
{
	struct Node*root=new Node(1);
	
	root->l=new Node(2);
	root->r=new Node(3);
	
	root->l->l=new Node(4);
	root->l->r=new Node(5);
	
	root->r->l=new Node(6);
	root->r->r=new Node(7);	
	
	cout<<"Preorder travarsal "<<endl<<"\n";
	preorder(root);
	}

**/output of the program is :/**

Preorder travarsal

1 2 4 5 3 6 7
