#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main()
{
    string str,strr;
    int count=0;
    char c=' ';
    
 getline(cin,str);
    //cout<<str;
    for(int i=0;i<str.length();i++)
    {
       if( str[i]==c)
       {}
        else
        {strr=strr+str[i];}
        
    }
    count=(int)strr.length();
    
    //cout<<"strr me :"<<strr<<endl;
    count=sqrt(count);
    //cout<<"count:"<<count<<" "<<"str length:"<<strr.length()<<endl;
    int test,count2;
    test=count*(count+1);
    //cout<<"test:"<<test<<endl;
    if(test<strr.length())
    {count++;
        if(count*count>=strr.length())
        {count2=count;}
        else
        {count2=count+1;}
        
        
    }
    else if((count*count)==strr.length())
    {count2=count;}
    else
    {
        count2=count+1;
        
    }

    
    
    //cout<<"count"<<count<<endl;
    //cout<<"test:"<<test;
    string arr[count][count2];
    int k=0;
    
    for(int i=0;i<count;i++)
    {
        for(int j=0;j<count2;j++)
        {
            if(k<strr.length())
            {  arr[i][j]=strr[k];
                //cout<<arr[i][j]+" ";
                
            }
            else
                arr[i][j]="";
            
            
            k++;
        }
        //cout<<endl;
    }
    strr="";
    for(int i=0;i<count2;i++)
    {
        if(i>0)
        strr=strr+" ";
        
        for(int j=0;j<count;j++)
        {
            strr=strr+arr[j][i];
            
        }
        
        //cout<<endl;
        
    }
    
    cout<<strr;
}


