#include<iostream>
#include <stack>
using namespace std;

class Node
{
	public:
		int data;
		
		Node* next;
		
		Node(int value)
		{
			data = value;
			next = NULL;
		}
		
};

int main()
{
	stack<int> stack;
	int flag = 1;
	Node* head = NULL;
	int top =-1;
	Node* one = new Node(10);
	Node* two = new Node(20);
	Node* three = new Node(20);
	Node* four = new Node(10);
	
		head = one;
		one->next = two;
		two->next= three;
		three->next=four;
		
		
		Node* temp = head;
		
		while(temp != NULL)
		{
			stack.push(temp->data);
			temp = temp->next;
		}
		
		int i;
		
		while(head != NULL)
		{
			i = stack.top();
			stack.pop();
			
			if(head->data == i)
			{
				flag =1;
				
			}
			else
			{
				flag = 0;
				break;
			}
			head = head->next;
		}
		
		if(flag)
		{
			cout<<"is palindrome";
		}
		else
		{
			cout<<"not palindrome";
		}
		
		
		
	
	
}
