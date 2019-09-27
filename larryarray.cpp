#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i;i<n;i++)
  cin>>a[i];
  int sum=0;
  for(int i=0;i<n;i++)
  {
   if(a[i]==i+1)
   continue;
   else
   {
     cout<<" val test:"<<a[i]<<"-"<<i+1<<"="<<(a[i]-(i+1))<<endl;
    sum=sum+(a[i]-(i+1));
   }
   
    
  }

  cout<<"the sum is :"<<sum<<endl;
}