//
//  main.cpp
//  test the arr
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
 
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;}
    
    
    for(int i=n-1;i>=0;i--)
    {
    if(p[i]==0)
    {}
        else
        {    m=p[i];break;}
    
    }


    return m;}



int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++)
    {cin>>p[i];
    }
    int x=0;
    
    x=small(n,p);
    
    
    

    
    cout<<endl<<"x:"<<x;
    
    
    
    return 0;
}
