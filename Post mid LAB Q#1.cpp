#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node*left;
		Node*right;
		Node(int d)
		{
			this->data=d;
			this->left=NULL;
			this->right=NULL;
		}
};
Node* BST(Node *&root,int data)
{
	if(root==NULL)
	{
		root=new Node(data);
		return root;
	}
	if(data > root->data)
	{
		root->right=BST(root->right,data);
	}
	else
	{
		root->left=BST(root->left,data);
	}
	return root;
}
void takeInput(Node*& root)
{
	int data;
	
	cin>>data;
	while(data!=-1)
	{
		BST(root,data);
		cin>>data;
	}
}
Node *Inorder(Node*& root)
{
	if(root==NULL)
	{
		return NULL;
	}
	Inorder(root->left);
	cout<<root->data;
	Inorder(root->right);
}
int leaf(Node*& root)

{
    if (!root)
        return 0;
    if (!root->left && !root->right)
    {
        cout << root->data << " ";
        return 1;

    }
    if (root->left)
        leaf(root->left);
    if (root->right)
       leaf(root->right);
}
int main()
{
	Node*root=NULL;
	cout<<"Enter data in BST"<<endl;
	takeInput(root);
	cout<<"Inorder of BST  "<<endl;
	Inorder(root);
	cout<<"Find the leave Node"<<endl;
	leaf(root);
}

