#include<iostream>
using namespace std;
#define s 10

  void insert(int arr[],int insert ,int loc,int *n)//55,3
  {
           
	  	 for(int i=*n;i>=0;i--)//5,4
	  	 {
	  	 	 if(i==loc)//3==5
	  	 	 {
	  	 	    arr[i] = insert;//
	  	 	    break;
				   	
			 }
			 arr[i] = arr[i-1];//6//
		 }
		 *n=*n+1;
		  for(int i=0;i<*n;i++)
	  	 {
	  	 	cout<<arr[i]<<" ";
		 }
		  
  }
int main()
{


	int arr[s] = {2,3,4,5,6};
	int n=5;
	
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	if(n+1 <= s) //6 < s
	{
		int inert,loc;
		cout<<"enter the element you want to insert and location  ";
		cin>>inert;//55
		cout<<"enter the location  ";
		cin>>loc;//3
		insert(arr,inert,loc,&n);
		
		cout<<"enter the element you want to insert and location  ";
		cin>>inert;//55
		cout<<"enter the location  ";
		cin>>loc;//3
		insert(arr,inert,loc,&n);	
	}
	else
	{
		cout<<"Array is full";
	}
}




