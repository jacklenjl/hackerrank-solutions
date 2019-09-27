#include<iostream>
using namespace std;

double fact(int n)
{
if(n==1)
return 1;

return n*fact(n-1);
}

int main()
{
double t,n,r;
cin>>t;
for(double i=0;i<t;i++){
cin>>n>>r;
double g=fact(n);
//cout<<"g:"<<g<<endl;
double y=fact(2);
double u=(n-y);
u=fact(u);
u=u*y;
cout<<(g/u)<<endl;

}
}