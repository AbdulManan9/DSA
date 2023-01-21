#include<iostream>
#include<queue>
using namespace std;
class Node
{
	public:
		int data;
		Node*left;
		Node*right;
		int size;
		Node(int d)
		{
			this->data=d;
			this->left=NULL;
			this->right=NULL;
		}
};
Node *buildtree(Node*&root,int data)
{
	if(root==NULL)
	{
		root=new Node(data);
	}
	 if(root->data>data)
	{
		root->left=buildtree(root->left,data);
	}
	if(root->data<data)
	{
		root->right=buildtree(root->right,data);
	}
	return root;
	
}
void levelOrderTraversal(Node*&root)
{
	queue<Node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		Node*temp=q.front();
	
		q.pop();
		if(temp==NULL)
		{
			cout<<endl;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
	else
	{
    cout<<temp->data<<" ";
	if(temp->left)
	{
		q.push(temp->left);
	}
	if(temp->right)
	{
		q.push(temp->right);
	}
}
}
}

int main()
{
	Node*root=NULL;
	int size;
	cout<<"Enter size of tree";
	cin>>size;
	int data;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter data"<<endl;
		cin>>data;
		buildtree(root,data);
	}
	levelOrderTraversal(root);
}
