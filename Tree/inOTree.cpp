//inorder left - root - right
//4 2 5 1 6 3 7
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

/* Binary Tree
           1
         /   \     
	   2      3
	 /   \   / \
    4     5 6   7 */ 
    
void inorder(struct Node* root)
{
	
//	base con
	if(root==NULL)
		return;
    inorder(root->l);
	cout<<root->data<<" ";
	inorder(root->r);
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
	
	cout<<"Inorder travarsal "<<endl<<"\n";
	inorder(root);
	}


Output of the program is :
Inorder travarsal

4 2 5 1 6 3 7
