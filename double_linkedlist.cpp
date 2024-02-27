#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node* prev;
	node* next;
	
	node(int value)
	{
		data = value;
		prev = NULL;
		next = NULL;
	}
};

void printdata(node* head)
{
	node* temp = head;
	while(temp != NULL)
	{
		cout<<"data "<<temp->data<<endl;
		temp = temp->next;
	}
	
	
}

void insertNodeAtlast(node* &head,int value)
{
	node* temp;
	
	node* newnode = new node(value);
	if(head == NULL)
	{
		head = newnode;
	}
	else
	{
		temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next= newnode;
		newnode->prev=temp;
		newnode->next=NULL;
	}
	
}

void insertNodeAtspecific(node* &head ,int val,int indx)
{
	node* newnode = new node(val);
	int count = 1;
	if(indx == 1)
	{
		newnode->next= head;
		head->prev = newnode;
		head = newnode;
		newnode->prev=NULL;
	}
	else
	{
		node* temp = head;
		while(count != indx-1)
		{
			
			if(temp->next == NULL)//2==3-1
			{
				cout<<"Invalid Index"<<endl;
				return;
			}
			
			count++;//2
			temp = temp->next;//2
		}
		
		newnode->prev= temp;
		newnode->next = temp->next;
		temp->next->prev= newnode;
		temp->next = newnode;
		
		
	}
	
}

int main()
{
	node* head = NULL;
	cout<<"Enter the size";
	int n;
	cin>>n;
	int arr[n];


	for(int i=0;i<n;i++)
	{
		cout<<"Enter the"<<i<<" Node ";	
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		insertNodeAtlast(head,arr[i]);
	}
	printdata(head);
	
	
	
	int value,indx;
	cout<<"insert the value";
	cin>>value;
	cout<<"insert the indx";
	cin>>indx;
	
	insertNodeAtspecific(head,value,indx);
	printdata(head);
}
