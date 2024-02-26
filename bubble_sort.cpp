#include<iostream>
using namespace std;

int main()
{
	
	int arr[6] = {40,10,5,16,20,23};
	int temp=0;
   	//40,10,5,16,20,23
	for(int i=0;i<sizeof(arr)/ sizeof(int);i++)//0
	{
		for(int j=0;j<=sizeof(arr)/ sizeof(int)-1;j++)//1 //2 
		{
			if(arr[i] < arr[j])//40>10//40>5
			{
				temp = arr[i];//10//
				arr[i] = arr[j];//40
				arr[j] = temp;//10
			}
		}
		
	}
	
   	for(int i=0;i<sizeof(arr)/ sizeof(int);i++)
	{
	
		cout<<" "<<arr[i];
	
	}
	
	return 0;
}
