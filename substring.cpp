#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int count=0;
        cin>>n;
        string str="";
        
                            
                            cin>>str;
long long finalcount=0;
            for(int i=0;i<n;i++)
            {   char c;
                    c=(char)str[i];

                    if(c=='1')
                    {
                        count++;
                       finalcount=finalcount+count;
                    }
            }

            /*int finalcount=0;
            for(int i=count;i>0;i--)
            {
                finalcount=finalcount+i;

            }*/
            cout<<finalcount<<endl;


    }

}