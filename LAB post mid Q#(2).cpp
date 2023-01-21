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
void secondLargestUtil(Node *root, int &c)
{
    if (root == NULL || c >= 2)
        return;

    secondLargestUtil(root->right, c);
    c++;
    if (c == 2)
    {
        cout<< root->data << endl;
        return;
    }
    secondLargestUtil(root->left, c);
}
int middle(Node *& root)
{
	int n=0;
	int i;
	int Arr[i];
	if(root==NULL)
	{
		return NULL;
	}
	Inorder(root->left);
	cin>>Arr[root->data];
	//++n;
	Inorder(root->right);
	cout<<"Total size of array"<<endl;
	//cout<<n;
	int mid=Arr[i/2];
	cout<<mid;  
}
void secondLargest(Node *root)
{
    int c = 0;
    secondLargestUtil(root, c);
}
int main()
{
	Node*root=NULL;
	takeInput(root);
	cout<<"Inorder Triversal"<<endl;
	Inorder(root);
	cout<<"Chuck second largest element in BST"<<endl;
	secondLargest(root);
	cout<<"Chuck middle elment in BST"<<endl;
	middle(root);
}
