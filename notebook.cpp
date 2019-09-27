#include<iostream>
using namespace std;
int main()
{
int t,x,y,k,n,notebook,price,sum=0,test=0;
cin>>t;
while(t!=0)
{
cin>>x>>y>>k>>n;
for(int i=0;i<n;i++)
{cin>>notebook>>price;
//cout<<"sum:"<<sum<<" notebook:"<<notebook<<" price:"<<price<<endl;
sum=sum+y+notebook;
//cout<<"sum:"<<sum<<endl;
if(sum>=x && price<=k)
{cout<<"LuckyChef"<<endl;test=0;break;}
else
{test=1;}
sum=0;
}
if(test==1)
cout<<"UnluckyChef"<<endl;

t--;

}
return 0;
}