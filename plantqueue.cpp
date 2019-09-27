#include <iostream>
#include <queue>
using namespace std;

void cal(queue<int> s,int count=0)
{
int flag = -1;
        
        int t1 = -1, t2;
        int pointer = s.size();
        
        for (int i = 0; i < pointer; i++)
        {
            t2 = s.front();
            if (t1 == -1)
            {
                t1 = t2;
            }
            //cout << t1 << " " << t2 << " s:" << s.size() << endl;
            s.pop();

            if (t1 == t2)
            {
                s.push(t2);

                continue;
            }
            if (t1 < t2)
            {

                flag = 0;
                t1 = t2;

                continue;
            }
            else
            {

                t1 = t2;
                if (s.empty())
                    s.push(t2);

                else
                {
                    s.push(t2);
                }
            }
        }
        // cout<<endl;
        //break;
        count++;
        if (flag == -1)
            {cout<<count-1;
                return ;}
           
            cal(s,count);
}

int main()
{
    int n;
    cin >> n;

    queue<int> s;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        s.push(t);
    }

    //cout<<"inserted";
    int count = 0;

   cal(s);
    //  while(!s.empty())
    //             {
    //                 cout<<s.front()<<" ";
    //                 s.pop();
    //             }

    
}