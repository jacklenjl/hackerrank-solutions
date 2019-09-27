#include<iostream>
#include<stack>
using namespace std;

int testme(int a[],int k,int n)
{
int test=a[k];
//cout<<"test:"<<test<<endl;
int count=1;

while(1)
{
    k++;
//cout<<"k:"<<k<<" "<<"a[k]:"<<a[k]<<endl;

    if(k==n)
    break;
else if((a[k]<test))
   break;

count++;
}
//cout<<"final count:"<<count<<" finaltest:"<<test<<endl;
return count*test;

}

int main()
{
while(1){
int n;
cin>>n;
if(n==0)
break;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];  
int max=0;
//int checkme=testme(a,0,n);  
//cout<<"checkme:"<<checkme;
for(int i=0;i<n;i++)
{
 int checkme=testme(a,i,n);   
 //cout<<"checkme:"<<checkme;
if(max<checkme)
{max=checkme;
//cout<<"max:"<<max<<endl;
}

}

cout<<max<<endl;
}
}