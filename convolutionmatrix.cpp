#include<iostream>
using namespace std;

int main()
{
int a[6][6];
for(int i=0;i<6;i++)
{for(int j=0;j<6;j++)
{
    cin>>a[i][j];
}}
int max=0;
for(int i=0;i<4;i++)
{
for(int k=0;k<4;k++){    
for(int j=i;j<i+3;j++)
{
for(int y=k;y<k+3;y++){
max=max+a[j][y];
//cout<<" i:"<<i<<" k:"<<k<<endl;
cout<<"j:"<<j<<" y:"<<y<<endl;
}
}
}
cout<<max<<endl;
}


}