//
//  main.cpp
//  Fresh Chocolate
//
//  Created by Kunal Baghel on 5/30/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int hell(int s[],int x,int packet)
{
    int p[x],m=0;
    for(int i=0;i<x;i++)
    {
        p[i]=s[i];
        
    }
    
    
    
    for(int i=1;i<x;i++)
    {
        int t;
        for(int j=0;j<x;j++)
        {
            t=p[i];
            if(p[i]>p[j])
            { p[i]=p[j];
                p[j]=t;}
            
            
        }}
    
   
    
    for(int i=0;i<x;i++)
    {
        if(p[i]==0)
            continue;
        for(int j=i+1;j<x;j++)
        {
           if(( p[i]+p[j])%packet==0)
           {  m++;
               p[i]=0;p[j]=0;break;
           
           }
        else if (p[i]!=0&&p[j]==0)
        {m++;break;}
        }
    
    
    }

   

    return m;}


int main(int argc, const char * argv[]) {
    
int nocase,teamno,packet,t=0,l=0,v=0;
    int hello[10000];
    cin>>nocase;
    
    do{
        t=0,l=0;int g=0,r=0;
        cin>>teamno>>packet;
    int a[teamno];
    int s[teamno];
    
    
    for(int i=0;i<teamno;i++)
    {
        cin>>a[i];
        t=a[i]+t;
        r++;
        
    }
  
    
    
    
if(t==packet)
{hello[v]=(1);}
        
        else if(r==1)
            
        {hello[v]=(1);}
        
        else
        { for(int i=0;i<teamno;i++)
            {
                if((a[i]%packet)==0)
                {l++;a[i]=0;}
                
                s[i]=(a[i]%packet);
            
            
            }
        
        
        
        g=hell(s,teamno,packet);
            hello[v]=(g+l);
        
        }
        
        v++;
    }while(v<nocase);

    for(int i=0;i<nocase;i++)
    {
    cout<<"Case #"<<i+1<<":"<<" "<<hello[i]<<endl;
        
    }
    
    
    return 0;
}
