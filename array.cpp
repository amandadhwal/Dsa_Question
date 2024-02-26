#include<iostream>
using namespace std;

    int main()
{

    int n;
    cin>>n;
    int arr[] = {1,2,3,4,5};
    int arr1[n];
    int arr2[5] = {0};


    for(int i=0;i<sizeof(arr1)/sizeof(int);i++)
    {
        cin>>arr1[i];
    }

    for(int i=0;i<sizeof(arr1)/sizeof(int);i++)
    {
        cout<<arr1[i];
    }


}



