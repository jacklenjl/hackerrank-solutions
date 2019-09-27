#include<iostream>
using namespace std;

int precal(int a[],int n,int m)
{
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
    int dis=0;
for(int i=0;i<n;i++)
{
dis=dis+a[i]+(n+1-a[i]);
}
cout<<"dis:"<<dis<<endl;
if(dis<=m)
return dis;
else
return -1;

}

int main()
{
int n,m;
cin>>n>>m;
int a[n];
int y=0;
for(int i=0;i<n;i++)
{
    a[i]=i+1;
}

for(int j=0;j<n-1;j++){
    int t=a[0];
for(int i=0;i<n;i++)
{

a[i]=a[i+1];

}
a[n-1]=t;
y=precal(a,n,m);
if(y!=-1)
{cout<<y<<endl; break;}
else
continue;


}
if(y==-1)
cout<<y<<endl;



}