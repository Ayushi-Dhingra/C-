#include<iostream>
using namespace std;
int main()
{
int i, n, arr[20];
cout<<"\n Enter the number of elements in the array : ";
cin>>n;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"\n The array elements are ";
for(i=0;i<n;i++)
cout<<arr[i];
return 0;
} 
