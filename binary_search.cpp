#include<iostream>
using namespace std;

int main()
{
	
	int arr[5];
   
   for(int i=0;i<5;i++)
   {
      cin>>arr[i];
   }
   
	int item;
	cout<<"user item "<<endl;
	cin>>item;
	int start = 0,end =(sizeof(arr)/sizeof(int))-1;
	//cout<<start<<" "<<end;

	  //1 2 3 4 5
	while(start <= end)//0<4//3<4
	{
		int mid = (start+end)/2; //2//3
		
		if(item > arr[mid])//4>3//4>4
		{
				start = mid+1;//3
		
		}
		else if(arr[mid] == item)
		{
			int a = arr[mid];
			cout<<"element found "<<a<<" "<<mid;
			break;
			
		}
		else
		{
			end = mid-1; 
		}
	
	}	

}
