//
//  main.cpp
//  Hacker Decryting Messages
//
//  Created by Kunal Baghel on 6/18/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
int findme(int pos)
{int m=0;
    for(int i=2;i<=(pos/2)||i==2;i++)
    {
        cout<<"i:"<<i<<endl;
        for(int j=2;j<=(pos/2)||j==2;j++)
    {
        cout<<"i:"<<i<<" j:"<<j<<endl;
    if((i%j)==0)
        break;
        else if(i*j==pos)
        {
            m=1;break;
        
        }
            
    
    }
    if(m==1)
        break;
    }


    return m;
}



int main(int argc, const char * argv[]) {
    
    
    int n,x;
    cin>>n>>x;
    int a[n];
    
    for(int i=0;i<n;i++)
    {cin>>a[i];}
    for(int i=0;i<n-1;i++)
    {for(int j=i+1;j<n;j++)
    {
        int t=a[i];
        if(a[i]>a[j])
        {       a[i]=a[j];
        a[j]=t;
        }
    } }
   
    
    
    
    do{
        
        int y,pos=0,m=0;
        
        cin>>y;
        if(y==0)
        {
            goto jumpme;
        }
        else{
        for(int i=0;i<n;i++)
        {
           cout<<"y:"<<y<<" a[]:"<<a[i]<<" y%a[]"<<y%a[i]<<endl;
            if(y<=a[i]||a[i]==0)
                continue;
            
            if(y%a[i]==0)
            {
               
                pos=(y/a[i]);
                if(pos%a[i]==0)
                    pos=pos/a[i];
                    cout<<"pos:"<<pos<<endl;
                m=findme(pos);
                break;}
        
        }
    
        //cout<<x;
        jumpme:
            {      //cout<<"x:"<<x<<endl;
            }
        if(m==0)
        {cout<<"no"<<endl;}
        else
            cout<<"yes"<<endl;}
        
   
            x--;
    }while(x>0);
    
    
    return 0;
}
