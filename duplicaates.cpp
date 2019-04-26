#include<iostream>
using namespace std;
int main()
{
	int n, pos,arr[100],i,j,flag;
	cout<<"ENTER THE NUMBER OF ELEMENTS";
	cin>>n;
	cout<<"ENTER THE ELEMENTS";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j] && i!=j)
			{
				flag=1;
				cout<<"DUPLICATES AT POSTION "<<i<<" & "<<j;
			}
		}
	if(flag=0)
	cout<<"No Duplicates Found";
	}
}
