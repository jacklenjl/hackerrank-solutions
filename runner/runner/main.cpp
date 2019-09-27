//
//  main.cpp
//  runner
//
//  Created by Kunal Baghel on 6/24/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    long testcase;
    cin>>testcase;
    do{
    long n,count=0,b=0,c;
    cin>>n>>c;
    long p[n],a[n],k[n];
    for(long i=0;i<n;i++)
    {
        cin>>p[i];
        cin>>a[i];
        k[i]=0;
    }
    for(long i=1;i<=n;i++)
    {
        
        for(long j=0;j<n;j++)
        {
        if(p[j]==i)
        {
            b=0; break;
        }
            else
            {b=1;}
                
        }
        if(b==1)
            k[i]=i;
        
    }
    
    for(long i=0;i<n;i++)
    {
        for(long j=0;j<n;j++)
        { if(k[i]==a[j])
        {
            a[j]=0;
        }
    
            }
    
    }
    
    for(long i=0;i<n;i++)
    {
    if(a[i]>0)
        count++;
    }
    
    cout<<count<<endl;
        testcase--;
        
    }while(testcase>0);
    
    return 0;
}
