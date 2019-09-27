//
//  main.cpp
//  competehacker
//
//  Created by Kunal Baghel on 6/17/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    
    int a[n],p[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        p[i]=-1;
    }
  
   
    int count=0,m=0,j=0;
    /*for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
        if(p>0)
        {count=1;p=0;}
        else
        {p++;
            count++;
            m=max(m,count);
        }
        }
        else
        {count++;
           // count=count+p;
            m=max(m,count);
            
        }
    
    
    }
    if(p==1)
    {//cout<<"p:"<<p;
     cout<<m-1;}
    else
    {//cout<<"p:"<<p;
        cout<<m;
    }*/
    
    for(int i=0;i<n;i++)
    {
    if(a[i]==1)
    {count++;
     m=max(m,count);
         p[j]=m;
    }
        else
        {
            m=0;
            count=0;
            j++;
            p[j]=a[i];
            j++;
        }
   
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
        //p[n]=-1;
    }
    
    //cout<<"p:"<<p<<endl;
    
    //cout<<"m:"<<m<<endl;
    return 0;
    
   
}
