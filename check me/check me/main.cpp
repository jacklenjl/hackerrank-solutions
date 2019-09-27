//
//  main.cpp
//  check me
//
//  Created by Kunal Baghel on 6/19/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>

using namespace std;
int main()
{
    int n,sum=0,m=0;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=a[i]+sum;
        m=max(m,a[i]);
        
    }
   /* for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {continue;}
        if((a[i]*n)>sum)
        {
            cout<<a[i];
            break;
        }
        
    }*/
    cout<<m;
    
}
