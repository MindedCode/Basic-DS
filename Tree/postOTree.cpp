//Postorder left - right - root 
//4 5 2 6 7 3 1
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
    //inorder left - right - root 
void postorder(struct Node* root)
{
	
//	base con
	if(root==NULL)
		return;
    postorder(root->l);
    postorder(root->r);
	cout<<root->data<<" ";
	
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
	
	cout<<"Postorder travarsal "<<endl<<"\n";
	postorder(root);
	}


Output of the Program is :
Postorder travarsal

4 5 2 6 7 3 1
