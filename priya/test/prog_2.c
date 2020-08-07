#include<iostream>
using namespace std;
int main()
{
int arr[30],n,i,j,temp;
cout<<"enter the size of array";
cin>>n;
cout<<"enter the elements of array";
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]<arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
cout<<"second largest number: "<<arr[1];
cout<<"second smallest number: "<<arr[n-2];
return 0;
}
