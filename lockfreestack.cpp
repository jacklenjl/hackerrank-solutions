#include<iostream>
#include<stack>
using namespace std;

class test
{
public:
stack <int> value;


};
void flip(stack <int> seqcheck)
{
    if(seqcheck.empty())
    return;
cout<<"seq:"<<seqcheck.top()<<" ";
//cout<<"val:"<<t[0].value.top()<<" ";
seqcheck.pop();
//t[0].value.pop();
return flip(seqcheck);
//if(seqcheck.top()==t[0].value.top())
//cout<<"equal";

}


int main()
{
    

int n,s,sum=0,seqno,num;
cin>>n;
test t[n];
for(int i=0;i<n;i++)
{
    
    cin>>s;
    sum=s+sum;
    for(int j=0;j<s;j++)
    {cin>>num;
    t[i].value.push(num);}
}
stack <int> seqcheck;
for(int i=0;i<sum;i++)
{
cin>>seqno;
seqcheck.push(seqno);
}
flip(seqcheck);
cout<<endl;

cout<<endl;
}
/*#include<iostream>
#include<stack>
using namespace std;

string checkseq(int a[],stack <int> f,int n,int i)
{

if(f.empty()||n==0)
return "Yes";

else if(f.top()==a[i])
{
    //cout<<"f:"<<f.top()<<" a:"<<a[i]<<endl;
    f.pop();
    i++;

return checkseq(a,f,n,i);
}
else
return "No";

}

int main()
{
stack <int> f;
int t;
cin>>t;
for(int y=0;y<t;y++){
    int n,q,p,sum=0;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>q;
    sum=sum+q;
    for(int j=0;j<q;j++)
    {
        cin>>p;
        f.push(p);
    }
    
}
int a[sum];
for(int i=0;i<sum;i++)
cin>>a[i];




cout<<checkseq(a,f,n,0)<<endl;
}


}*/