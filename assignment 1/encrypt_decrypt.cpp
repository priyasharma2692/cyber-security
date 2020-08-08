#include<iostream>
using namespace std;
int main()
{
int i,x;
char str[100];
cout<<"enter a string :";
cin>>str;
cout<<"\nchoose the following options:";
cout<<"1=encrypt the string\n";
cout<<"2=decrypt the string\n";
cin>>x;
switch(x)
{
case 1:
for(i=0;(i<100&& str[i]!='\0');i++)
str[i]=str[i]+5;
cout<<"\nencrypted string "<<str<<endl;
break;
case 2:
for(i=0;(i<100&& str[i]!='\0');i++)
str[i]=str[i]-5;
cout<<"\ndecrypted string "<<str<<endl;
break;
default:
cout<<"\ninvalid input";
}
return 0;
}
