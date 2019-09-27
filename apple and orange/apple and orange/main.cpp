//
//  main.cpp
//  apple and orange
//
//  Created by Jack Len on 5/19/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    long  int s,t,a,b,m,n,temp,countm=0,countn=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int x[m],y[n];
    for(int i=0;i<m;i++)
    { cin>>x[i];
    
    }
    for(int i=0;i<m;i++)
    {
        temp=0;
        temp=a+x[i];
        if(temp>=s && temp<=t )
            countm++;
        
    }
    
    for(int i=0;i<n;i++)
    {
    cin>>y[i];
    }
    
    for(int i=0;i<n;i++)
    {
        temp=0;
        temp=b+y[i];
        if(temp>=s && temp<=t )
            countn++;
    
    }
    
    cout<<countm<<endl<<countn<<endl;
    
    return 0;
}
