#include<iostream>
using namespace std;
int fibonacci(int);
int main()
{
int n,m=0,i;
cout<<"enter the numbers of terms:";
cin>>n;
cout<<"fibonacci seriers: ";
for(i=1;i<=n;i++)
{
cout<<" "<<fibonacci(m);
m++;
}
return 0;
}
int fibonacci(int n)
{
if(n==0||n==1)
return n;
else
return(fibonacci(n-1)+fibonacci(n-2));
}
