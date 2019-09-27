#include <iostream>
#include <string>
using namespace std;


int main() {
   /* int a[10000],n,f=-1,option,number,maxnum=0;
    cin>>n;
    do
    {
        cin>>option;
        if(option==1)
        { cin>>number;f++;
            a[f]=number;
        }
        if(option==2)
        { f--;}
        if(option==3)
        { for(int i=0;i<=f;i++)
            
        {
            
            if(a[i]>maxnum)
                maxnum=a[i];
            
        }
            cout<<maxnum;
            maxnum=0;
        }
        
        n--;
    }while(n>0);*/
    int n,p=0,len=0,z=0,x,y,a[20000],b[20000];
    cin>>n;
    string s[n];
    x=-1;y=-1;
    for(int i=0;i<n;i++)
        cin>>s[i];
    do
    {
        z=1;
       len=(int)s[p].length();
        len=len/2;
        len--;
       /* y=len;
        x=len-1;*/
      
        // cout<<"len="<<len<<endl;
        for(int i=0;i<s[p].length();i++)
        {
            if(s[p].at(i)=='('||s[p].at(i)=='{'||s[p].at(i)=='[')
            {x++;
                a[x]=s[p].at(i);
                
            }
            
           else if(s[p].at(i)==')'||s[p].at(i)=='}'||s[p].at(i)==']')
            {y++;
                b[y]=s[p].at(i);
                
                
            }
          //  cout<<s[p].at(x);
            // cout<<s[p].at(y)<<endl;
            
        }
        //cout<<"x="<<x<<" y="<<y<<endl;
     if(x==y)
     {for(int i=0;i<x;i++)
     {
         //cout<<"a[i]="<<a[i]<<" b[i]="<<b[len]<<endl;
         if(a[i]=='(' && b[len] == ')')
         {
             
             z=0;}
         else if (a[i]=='[' && b[len] == ']')
             z=0;
         else if (a[i]=='{' && b[len] == '}')
             z=0;
         else
         {z=1;
             break;}
         len--;
     }
         if(z==1)
             cout<<"NO"<<endl;
         else
             cout<<"YES"<<endl;
         
         
     }
        else
            cout<<"NO"<<endl;
        
        x=-1;
        y=-1;
        z=0;
        p++;
        }while(p<n);
   
    return 0;
}

