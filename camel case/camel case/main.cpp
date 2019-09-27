

/*A
 #include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string str;
    int count=0;
    cin>>str;
    
    for(int i=0;i<str.length();i++)
    {
        char c=str[i];
        if(isupper(c))
        {count++;}
        
    }
    
    cout<<count+1<<endl;
    return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    char c;
    string str,spec="!@#$%^&*()-+";
    int count,u=0,l=0,d=0,len=0,specchar=0;
    cin>>count;
    cin>>str;
    if(str.length()>=6)
    {len=1;}
    
    for(int i=0;i<str.length();i++)
    {
        c=str[i];
        if(isupper(c))
        {u=1;}
        if(islower(c))
        {l=1;}
        if(isdigit(c))
        {d=1;}
        for(int j=0;j<spec.length();j++)
        {
            if(c==spec[j])
                specchar=1;
            
        }
    }
    
   /* cout<<"u:"<<u<<endl;
    cout<<"l:"<<l<<endl;
    cout<<"d:"<<d<<endl;
    cout<<"specchar:"<<specchar<<endl;
    cout<<"len:"<<len<<endl;
    */
    int x=0;
    //cout<<"x:"<<x<<endl;
    while(true){
        if(u!=1)
        {x++;
            //cout<<"x:"<<x<<endl;
        }
        if(l!=1)
        {   x++;
            //cout<<"x:"<<x<<endl;
        }
        if(d!=1)
        {    x++;
            //cout<<"x:"<<x<<endl;
        }
        if(specchar!=1)
        { x++;
            //cout<<"x:"<<x<<endl;
        }
        
        if(len!=1)
        {  if((str.length()+x)<=6)
        {
            x=0;
            x=x+(6-str.length());}
            
              
              }
              
        cout<<x;
        break;
    }
    
    return 0;
}



