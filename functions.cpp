#include<iostream>
#include"header.h"
using namespace std;

int reverse(int a[],int array_size)
{
int c=array_size-1;
int y=c;
for (int x=0;x<=(array_size/2);x++)
{
int p=a[x];
a[x]=a[y];
a[y]=p;
y--;
}
for (int x=0;x<array_size;x++)
{
cout<<a[x]<<endl;
}
}







int rotate(int a [],int array_size)
{
     int times,temp,m;
     cout<<"for how many times did you want to rotate array"<<endl;
     cin>>times;
      cout<<endl;
        for (int x=0;x<times;x++)
        {
              m=0;
              temp=a[0];
       
           for (int y=1;y<array_size;y++)
           {
               
                a[m]=a[y];
                m++;
           
           }
a[array_size-1]=0;
          a[array_size-1]=temp;
  
        }
for (int m=0;m<array_size;m++)
{
cout<<a[m]<<endl;
}
}






int sort(int a[],int array_size)
{
int s=array_size * 2;
for (int g=0;g<s;g++)
                       {
for (int x=0;x<array_size;x++)
       {
if(a[x]>a[x+1])
{
int gret_val=a[x];
a[x]=a[x+1];
a[x+1]=gret_val;
}
        }
                       }
cout<<endl;
for (int x=0;x<array_size;x++)
{
cout<<a[x]<<endl;
}
}






int un_sort(int a[],int array_size)
{
int p,h;
cout<<"enter search number"<<endl;
cin>>p;
int m;
for (int x=0;x<array_size;x++)
{
if (a[x]==p)
{
     m=x;
     h=0;
     break;
}
}
if (h=0)
{
cout<<"number found at inex"<<m<<endl;
}
else
{
cout<<"number is not found"<<endl;
}}










int s_sort(int a[],int array_size,int x,int p)
{

if (a[x]==p)
{
     return x;
}
x++;
s_sort(a,array_size,x,p);
}






