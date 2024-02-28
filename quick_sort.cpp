#include<iostream>
using namespace std;


	int partition(int arr[],int s,int e)
	{
		int pivot = arr[e];
		int pindx = s;
		
		for(int i=s;i<e;i++)
		{
			if(arr[i]<=pivot)
			{
				int temp = arr[i];
				arr[i] = arr[pindx];
				arr[pindx] = temp;
				
				pindx++;
			}
			
			
			
		}
			int t = arr[e];
			arr[e] = arr[pindx];
			arr[pindx] = t;
			
			return pindx;
	}
	
void quicksort(int arr[],int s,int e)
{
 	if(s<e)
 	{
 		int p = partition(arr,s,e);
 		quicksort(arr , s, p-1);
 		quicksort( arr,p+1,e);
	}
}

 

int main()
{
	
	int n;
	cout<<"Enter number of value";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"unsorted element are"<<endl;
		for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	int s = 0;
	int e = n-1;
	
	
	quicksort(arr,s,e);
	cout<<"sorted element are"<<endl;
		for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
