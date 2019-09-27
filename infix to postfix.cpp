#include<iostream>
#include<stack>
using namespace std;

int main()
{

int t;
cin>>t;
for(int d=0;d<t;d++){
string s;
stack <char> f;
cin>>s;


for(int i=0;i<s.size();i++)
{

//cout<<endl;

if(s[i]==')')
{
    //cout<<"i:"<<i;
    while(1)
{
      //cout<<"i:"<<i;
cout<<f.top();
f.pop();
if(f.top()=='(')
{f.pop();break;}
}
}
else if(isalpha(s[i])!=0)
cout<<s[i];
else
f.push(s[i]);

}
while(!f.empty())
{
    if(f.top()=='(')
{  f.pop();}
  else
  {
      cout<<f.top();
  f.pop();
  }
    
}
cout<<endl;

}


}