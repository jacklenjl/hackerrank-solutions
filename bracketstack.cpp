#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> s;

    string str;
    cout<<"Enter the Bracket String:";
    cin>>str;
    //cout<<endl;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
        s.push(str[i]);
        if(s.top()=='(' && str[i]==')')
        s.pop();
        else if(s.top()=='{' && str[i]=='}')
        s.pop();
        else if(s.top()=='[' && str[i]==']')
        s.pop();

    }
     //cout<<"size is:"<<s.size()<<endl;
     if(s.size())
     cout<<"Invalid"<<endl;
     else
     cout<<"valid"<<endl;



    
}