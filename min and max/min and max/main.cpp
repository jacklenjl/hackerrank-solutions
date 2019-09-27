//
//  main.cpp
//  min and max
//
//  Created by Kunal Baghel on 5/15/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    long long a[5],sum[5],sum1=0;
    for(int i=0;i<5;i++)
    {cin>>a[i];}
    
    int m1[5]={0,1,2,3,4};
    int k=0;
    for(int i=0;i<5;i++)
    {
        k=i;
        for(int j=0;j<4;j++)
         {
             int t;
             if(k==5)
             {k=0;}
        t=m1[k];
             
             sum1=a[t]+sum1;
             
             k++;
             
        
         }
        sum[i]=sum1;
        sum1=0;
        //cout<<sum[i];
        cout<<endl;
        k=0;
        
    }
    
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
            int t;
            t=sum[i];
            if(sum[i]<sum[j])
            {    sum[i]=sum[j];
            sum[j]=t;
            }
            
        
        }
    
    cout<<sum[0]<<" "<<sum[4];
    
    
    return 0;
}



