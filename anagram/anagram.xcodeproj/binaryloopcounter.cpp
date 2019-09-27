#include<iostream>
#include <algorithm>
using namespace std;

int main()
{

string str;
cin>>str;
int a[5];
for(int i=0;i<5;i++)
cin>>a[i];
sort(a,a+5);
for(int i=0;i<5;i++)
cout<<a[i];



}
