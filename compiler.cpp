#include<iostream>
#include<stack>
using namespace std;

int main()
{
int t;
cin>>t;
for(int q=0;q<t;q++){    
string s;int count=0;
cin>>s;
stack <char> l;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='<')
    l.push(s[i]);
    else if(s[i]=='>' && l.empty())
    break;
    else if(s[i]=='>' && !l.empty())
    {
        l.pop();;
        if(l.empty())
        count+=2;
    }

}

cout<<count<<endl;
}
}


