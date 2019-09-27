//
//  main.cpp
//  cut the stick
//
//  Created by Kunal Baghel on 5/27/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;


int small(int n,int z[])
{
    int p[n],m=0;
    for(int i=0;i<n;i++)
    {
        p[i]=z[i];
        
    }
    
    
    
    for(int i=1;i<n;i++)
    {
        int x;
        for(int j=0;j<n;j++)
        {
            x=p[i];
            if(p[i]>p[j])
            { p[i]=p[j];
                p[j]=x;}
            
            
        }}
    
    
    
    
    for(int i=n-1;i>=0;i--)
    {
        if(p[i]==0)
        {}
        else
        {    m=p[i];break;}
        
    }
    
    
    return m;}


void cop(int x,int y[])
{
   
    int z=1,k=0,count=0;
    int t;
    t=small(x, y);
    
   do{count++;
    for(int i=0;i<x;i++)
    {
     if(y[i]==0)
        {}
     else
     {  y[i]=y[i]-t;k++;
     }
    
    
    }
       
       t=small(x,y);
       
       
       if(k==0)
       {}
       else
           cout<<k<<endl;
       
        k=0;
       
        if(count==x)
        {z=0;}
        
        
    }while(z!=0);
}

int main() {
    int n;
    cin>>n;
    
    
    int a[n];
   
    
    
    for(int i=0;i<n;i++)
    {cin>>a[i];
    }
   
   
    cop(n,a);
    
    
    
    return 0;
}
