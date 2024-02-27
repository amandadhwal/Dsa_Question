#include<iostream>
#define size 10
using namespace std;


class stack
{
	int top;
	int arr[size];
	
	public:
		stack()
		{
			top = -1;
//			for(int i=0;i<;i++)
//			{
//				arr[i] = 0;
//			}
		}
		
	

void pushdata(int data)
{
	if(top == size-1)
	{
		cout<<"overflow";
	}
	else
	{
		top++;
		arr[top] = data;
	}
	
}

void popdata()
{
	int deletvalue;
	if(top == -1)
	{
		cout<<"underflow"<<endl;
		
	}
	else
	{
		deletvalue = arr[top];
		arr[top] = 0;
		top--;	
		
		cout<<"deleted value is"<<deletvalue<<endl;
		
	}	
}

void peekdata()
{
	
	if(top == -1)
	{
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		cout<<"peek value is "<<arr[top]<<endl;
		
	}	
}

int countdata()
{
	return top+1;
}

void changedata(int value,int pos)
{
	
		if(pos <= top)
		{
			arr[pos] = value;
		}
		else
		{
			cout<<"invalid index";
		}
	
}

void printdata()
{

	for(int i=0;i<=top;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

};


int main()
{
	stack obj;
	
	cout<<"-------------------------------stack function ------------------------------------------"<<endl;
	cout<<"Enter 1 for push element"<<endl;
	cout<<"Enter 2 for pop element"<<endl;
	cout<<"Enter 3 for peek element"<<endl;
	cout<<"Enter 4 for count element"<<endl;
	cout<<"Enter 5 for change value element"<<endl;
	cout<<"Enter 6 for print element"<<endl;
	cout<<"Enter 7 to exit"<<endl;
	
	cout<<"---------------------------------end---------------------------------------"<<endl;
	
	int choice;
	while(true)
	{
		cout<<"enter your choice: "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
			cout<<"Enter element to push in stack";
			int value;
			cin>>value;
			obj.pushdata(value);
			break;
			
			case 2:
			obj.popdata();
			break;
			
			case 3:
			obj.peekdata();
			break;
			
			case 4:
			cout<<"no of element is "<<obj.countdata();
			break;
			
			case 5:
			int val,pos;
			cout<<"Enter element to change ";
			cin>>val;
			cout<<"Enter position to change ";
			cin>>pos;
			obj.changedata(val,pos-1);
			break;
			
			case 6:
			obj.printdata();
			break;
			
			case 7:
			exit(0);
			
			default :
			cout<<"Invalid Input"<<endl;		
				
		}
	}
	
	
	
	
	
	
}


