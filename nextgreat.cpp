#include<iostream>
#include<stack>
using namespace std;
void reverse(stack <int> s)
{
    if(s.empty())
    {
        return;
    }

    int y=s.top();
    
    s.pop();
    
    reverse(s);
    cout<<y;
}


int main()
{

int t,n,x;
cin>>t;
for(int p=0;p<t;p++){
cin>>n;
stack <int> s,q;
for(int i=0;i<n;i++)
{cin>>x;
s.push(x);}
x=s.top();
s.pop();
//cout<<"test";
int check=0;

                    for(int i=0;i<n;i++)
                    {
                        if(s.empty())
                        {check=1;break;}
                        if(x>s.top())
                        {
                          q.push(x);
                          x=s.top();
                          s.pop();
                          check=0;
                          break;  

                        }
                        else
                        {
                            q.push(x);
                            x=s.top();
                            s.pop();
                            check=1;
                        }
                        

                    }
                    //cout<<"x:"<<x<<endl;
                    if(check==1)
                    {cout<<"-1"<<endl;
                        continue;}
                    while(!q.empty())
                    {
                        //cout<<q.top();
                        int g=q.top();
                        s.push(g);
                        q.pop();

                    }
                    s.push(x);

reverse(s);
cout<<endl;
}
}


/*#include<iostream>
#include <stack>
using namespace std;

  int n,t;
void reverse(stack <int> e)
{
if(e.empty())
return;
int x=e.top();
e.pop();

reverse(e);
cout<<x;
}

int main()
{
    int u;
    cin>>u;
    for(int v=0;v<u;v++){
    stack <int> s,q;
  
    //cout<<"enter n:";
    cin>>n;
            for(int i=0;i<n;i++)
        {
                cin>>t;
                s.push(t);
        }
        t=s.top();
        s.pop();

        q.push(t);int check=0;
        for(int i=0;i<n;i++)
    {

    if(t>s.top())
    {
        t=s.top();
        s.pop();check=1;
        break;
    }
            else
            {
            t=s.top();
            q.push(t);
            s.pop();
  
            }}
       


            while(!q.empty())
            {
                    int x=q.top();
                    s.push(x);
                    q.pop();
            }
            s.push(t);

            reverse(s);
            cout<<endl;
            
    }
}*/