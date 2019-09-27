//
//  main.cpp
//  mid point
//
//  Created by Kunal Baghel on 7/28/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
  
    
    long long  n;
    cin>>n;
    long long  a[n];
    long long  max1=1;
    for(long long  i=0;i<n;i++)
    {
        cin>>a[i];
        //max1=max(a[i],max1);
        
    }
    for(int i=0;i<n;i++)
    {
        
        max1=max1*2;
        
    }
    cout<<"max1:"<<max1<<endl;
    max1=max1+2;
    
    
    long long  m=0;
    long long  p[max1];
    cout<<"max1:"<<max1<<endl;
    for(long long  i=0;i<n;i++)
    {
        p[m]=i;
        
        
        for(long long  j=0;j<=n;j++)
        { p[m]=(i*10)+j;
            cout<<"i:"<<i<<" j:"<<j<<" m:"<<m<<" p[m]:"<<p[m]<<endl;
            
            m++;
        }
        
    }
    
    long long count=max1;
    for(long long i=0;i<max1;i++)
    {
        for(long long  j=0;j<max1;j++)
        {
            if(p[i]-p[j]==2)
                count++;
            else if(p[i]-p[j]==-2)
                count++;
            
        }
        
        
    }
    cout<<count;
    
    
    
    
    


    
    return 0;
}
