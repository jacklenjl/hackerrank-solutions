#include<iostream>
using namespace std;

int main()
{
int t,n,c;
cin>>t;
while(t!=0){
cin>>n>>c;
int a[n];
int sum=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    sum=sum+a[i];
}

if(c>=sum)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;




t--;
}


}