#include <iostream>
#include <stack>
using namespace std;
int main()
    {          int n;
            cin >> n;
           int p[n];
            stack <int> s;
            for (int i = 0; i < n; i++)
            {
                int t;
                cin >> t;
                s.push(t);
            }

    //cout<<"inserted";
    int count = 0;
    
   
    while(1)
    {   int flag=-1;
       
        
        stack <int> temp;
        
       while(!s.empty())
       {
           temp.push(s.top());
           s.pop();
       }
            //cout<<"called"<<endl;
            int t1=-1,t2;
        while(!temp.empty()){
            
            
                t2=temp.top();
                {
                if(t1==-1) 
                {t1=t2;}
                temp.pop();
                }


                cout<<t1<<" "<<t2<<endl;
                // if(!s.empty())
                // cout<<"top is:"<<s.top()<<endl;;
                if(t1==t2)
                {
                    s.push(t2);
                    continue;
                }
                if(t1<t2)
                {
                    
                        flag=0;
                        t1=t2;
                        continue;
                    
                }
                else
                {
                    t1=t2;
                    if(s.empty())
                    s.push(t2);
                    else if(s.top()==t1)
                    continue;
                    else
                    {
                        s.push(t2);
                    }
                    
                    
                }
            }
                //cout<<endl;
               
                count++;
                if(flag==-1)
                break;
    }

    //  while(!s.empty())
    //             {
    //                 cout<<s.top()<<" ";
    //                 s.pop();
    //             }

                cout<<count-1<<endl;
}