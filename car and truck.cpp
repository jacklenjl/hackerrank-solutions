#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{

int t=1,k;

do{
cin>>t;
if(t==0)
break;

queue <int> p,f;
stack <int> s;
for(int i=0;i<t;i++)
{cin>>k;p.push(k);} 

for(int i=1;i<=t;i++)
{
if(!s.empty() && i==s.top())
{
    f.push(s.top());s.pop();continue;
}

    for(int j=i;j<=t;j++)
    {
    if(i!=p.front() && !p.empty())
    {
       // cout<<"no:"<<i<<" "<<p.front()<<endl;
        //p.pop();
       s.push(p.front());
        p.pop();
    }
   else if(i==p.front())
   {
       f.push(p.front());
       p.pop();break;
   }

    }
}

int test=0;
for(int i=1;i<=t;i++)
{
while(!f.empty())
{

    //cout<<"i:"<<i<<" f:"<<f.front()<<endl;    
    if(i==f.front())
    {f.pop();test=0;break;}
    else
    {
        test=1;break;
    }
    

}
if(test==1)
break;

}

if(test==0)
cout<<"yes";
else
cout<<"no";
cout<<endl;
}while(t!=0);

}



