#include<iostream>
#define max 10
using namespace std;

class queue
{
	public:
	int arr[max];
	int front =-1;
	int rear = -1;
	
	void enqueue(int value)
	{
		if(rear == max-1)
		{
			cout<<"queue is full";
		}
		else
		{
			
			rear++;
		 	arr[rear] = value;
			
		}
	}
	
	void dequeue()
	{
		if(front == rear)
		{
			cout<<"queue is empty";
		}
		else
		{
			int temp =0;
			front++;
			temp= arr[front];
			if(front == rear)
			{
			
				front = rear = -1;
				
			}
				
			cout<<temp<<" is deleted value"<<endl;
		
		}
	}
	
	void display()
	{
		for(int i=front+1;i<=rear;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	
};

int main()
{
	queue obj;
	obj.enqueue(10);
	obj.enqueue(20);
	obj.enqueue(30);
	obj.display();
	obj.dequeue();
	obj.display();
	
	
}
