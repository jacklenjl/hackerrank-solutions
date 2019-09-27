#include<iostream>
using namespace std;

void jump(int a[],int h,int i,int n)
{
int size =n;

if(size==i+1)
return ;

if(a[i+2]==0)
{i=i+2;
//cout<<a[i+2]<<" ";
//cout<<"i:"<<i<<" ";
  h=h+1;}
else if(a[i]==0)
{i=i+1;
//cout<<a[i]<<" ";
//cout<<"i:"<<i<<" ";
  h=h+1;}
jump(a,h,i,n);
if(i+1==size)
cout<<h<<endl;
}


int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
jump(a,0,0,n);



}
