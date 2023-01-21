#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node*next;
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
		}	
};
void insertNode(Node*&tail,int element,int d)
{
	if(tail==NULL)
	{
		Node*newNode=new Node(d);
		tail=newNode;
		newNode->next=newNode;
	}
	else
	{
		Node*curr=tail;
		while(curr->data!=element)
		{
			curr=curr->next;
		}
		Node*temp=new Node(d);
		temp->next=curr->next;
		curr->next=temp;
	}
}
void display(Node*& tail)
{
	Node*temp=tail;
	do{
		cout<<temp->data;
		temp=temp->next;
	}while(temp!=tail);
	cout<<endl;
}
void chuckDuplicate(Node*&tail)
{
	Node*temp=tail;
	
	do{
		Node*forw=temp->next;
		while(forw!=tail)
		{
		if(temp->data==forw->data)
		{
			cout<<temp->data;
		}
	}
	temp=temp->next;
	}while(temp!=tail);
}
void chuckCircular(Node*& tail)
{
	Node*temp=tail;
	do{
		if(temp->next=NULL)
		{
			cout<<"Link list is non circular sorted"<<endl;
		}
		else
		{
			cout<<"Link list is circular"<<endl;
		}
		temp=temp->next;
	}while(temp!=tail); 
}
int main()
{
	Node*tail=NULL;
	insertNode(tail,3,12);
	insertNode(tail,12,32);
	insertNode(tail,32,11);
	insertNode(tail,11,32);
	display(tail);
	cout<<"Chuck link list is circular or non circular"<<endl;
	chuckCircular(tail);
	cout<<"Chuck"<<endl;
	chuckDuplicate(tail);
}
