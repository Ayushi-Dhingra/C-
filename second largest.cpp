#include<iostream>
using namespace std;
int main()
{
	int arr[100],large,second_large,i,pos,n;
	cout<<"Enter the number of elements";
	cin>>n;
	cout<<"Enter the elements";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	large=arr[0];
	for(i=1;i<n;i++)
	{
		if(large<arr[i])
		large=arr[i];
	}
	second_large=arr[1];
	pos=1;
	for(i=0;i<n;i++)
	{
		if(large!=arr[i])
		{
			if(large<arr[i])
			{
				second_large=arr[i];
				pos=i;
			}	
		}
	}
	cout<<"second Largest Element"<<second_large;
	cout<<"\n Position"<<pos;
}
