//
//  main.cpp
//  binary queries
//
//  Created by Kunal Baghel on 6/11/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    
   long long n,c,sum=0;
    cin>>n>>c;
    long long a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    do{
   
   
        
        
        int flip,pos,total;
    if((c%2)==0)
    {cin>>flip>>pos;
        a[pos-1]=flip;
        
        
    }
    
   else
   {
       cin>>flip>>pos>>total;
      //a[pos-1]=flip;
       //for(int i=0;i<n;i++)
         //  cout<<"a:"<<a[i]<<endl;
       
       
       int p=0;
       for(int i=(pos-1);i<total;i++)
       {
           long t=a[i];
           
           sum=sum+(t*pow(2,p));
            //cout<<"sum:"<<sum<<endl;
           p++;
       }
      // cout<<"sum:"<<sum<<endl;
       if((sum%2)==0)
       { cout<<"EVEN"<<endl;sum=0;}
       else
       { cout<<"ODD"<<endl;sum=0;}
   }
          c--;
        
        
    }while(c>0);
   
    
    
    return 0;
}
