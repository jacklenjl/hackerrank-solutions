//
//  main.cpp
//  left rota
//
//  Created by Kunal Baghel on 6/2/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    long n,b,m=0,t=0;
    cin>>n>>b;
    long j;
    
    long a[n];
    for(long i=0;i<n;i++)
    {cin>>a[i];}
    t=a[0];
    for(long i=0;i<b;i++)
    {
        
        for(j=1;j<n;j++)
        {
            //t=a[0];
            a[m]=a[j];
            
            //cout<<"m:"<<m<<" "<<"j:"<<j<<endl;
            m++;
            
           //cout<<"a[]:"<<a[j]<<endl;
         if(j==n-1)
             a[j]=t;
        }
        m=0;
        t=a[m];
        
        
        
        
    }
    
    for(long i=0;i<n;i++)
    {cout<<a[i]<<endl;}
    
    
    return 0;
}
