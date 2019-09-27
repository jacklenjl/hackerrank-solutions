//
//  main.cpp
//  compa
//
//  Created by Kunal Baghel on 6/16/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int u;
    cin>>u;
    
    do{
        int x,p=1;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++)
        {cin>>a[i];}
        for(int i=0;i<x-1;i++)
        {
            for(int j=i+1;j<=i+1;j++)
            {
                if(a[i]<a[j])
                {}
                else
                {p++;}
                
            }
            if(p==0)
            { p=1;}
            
            
        }
        cout<<p;
        p=1;
        u--;
    }while(u>0);
}
