#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the size of link list"<<endl;
	int size;
	cin>>size;
	int Arr[size];
	cout<<"Enter value of array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];
	}
	int num=15;
	for(int i=0;i<10;i++)
	{
		for(int j=1;j<10;j++)
		{
			if(Arr[i]+Arr[j]==num)
			{
				cout<<Arr[i]<<Arr[j];
			}
		}
	}
}
