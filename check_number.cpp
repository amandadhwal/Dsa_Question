#include<iostream>
using namespace std;

int main()
{

int num;
cin>>num;

int sum=0,count=0;
while(num > 0)
{
    int rem = num%10;
    sum = sum+rem;
    num = num/10;
    count++;
}  
    if((sum % 3 == 0 || sum % 5 ==0 || sum % 7 == 0 )&& count == 4)
    {
    	cout<<"valid number";
	}
	else
	{
		cout<<"invalid";
	}

}

