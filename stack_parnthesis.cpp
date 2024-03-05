#include<iostream>
using namespace std;


int main()
{
	string str;
	cin>>str;
	int len = str.length();
	int arr[len];
	int top=-1,flag=1;
	
	for(int i=0;i<len;i++)
	{
		char ch = str[i];
		
		if(ch == '['|| ch=='{'||ch=='(')
		{
			top++;
			arr[top] = ch;
		}
		else
		{
		
			if(ch ==']')
			{
				if(arr[top] == '[' )
				{
					top--;
				}
				else
				{
					flag =0;
					break;
				}
			}
			else if(ch =='}')
			{
				if(arr[top] =='{')
				{
					top--;
				}
				else
				{
					flag =0;
					break;
				}
			}
			else if(ch ==')')
			{
				if(arr[top] == '(')
				{
					top--;
				}
				else
				{
					flag =0;
					break;
				}
				
			}
		}
	}
	
	if(flag && top == -1)
	{
		cout<<"valid paranthesis";
	}
	else
	{
		cout<<"invalid paranthesis";
	}
	
}
