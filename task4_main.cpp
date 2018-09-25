#include<iostream>
#include"header.h"
using namespace std;
int main()
{
int array_size;
cout<<"enter array size"<<endl;
cin>>array_size;
int a[array_size],search_number;
char condition;
cout<<"enter your list numbers"<<endl;
for (int x=0;x<array_size;x++)
{
cin>>a[x];
}
cout<<"enter the function which do you want to call (A for reverse) (B for rotate) (c for sort) (D for search nuber in unsorted list)"<<endl;
cin>>condition;
int x=0;
switch (condition)
{
case 'A':
reverse(a,array_size);
break;
case 'B':
rotate(a ,array_size);
break;
case 'C':
sort(a,array_size);
break;
case 'D':
un_sort(a,array_size);
break;
case 'E':
{int p;
cout<<"enter search number"<<endl;
cin>>p;
cout<<s_sort(a,array_size,x,p)<<endl;}
break;
}

return 0;
}
