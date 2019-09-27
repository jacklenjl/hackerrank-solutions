//
//  main.cpp
//  learn data structure
//
//  Created by Jack Len on 7/24/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//

#include <iostream>
using namespace std;
int a[5]={2,3,3,5,1};
int temp=1,i=0,j=1;
/*int fact(int n)
{
  
    
    if(n==1||n==0)
        return temp;
    else
        return n*fact(n-1);
        
   
}*/

int *sortm()
{
    
    int n=5;
    
   if(a[i]>a[j+i])
   {
        temp=a[i];
        a[i]=a[j+i];
        a[j+i]=temp;
        
        if(j<n)
        {j++;cout<<"j:"<<j<<endl;
            return sortm();}
       else
       {
           
           i++;cout<<"i:"<<i<<endl;
           j=0;
           return sortm();
       }
       
       
      
       
    }
  
    else
    { j++;
       return sortm();
        
    }
    
    
    return a;
}


int main(int argc, const char * argv[]) {
   // int a,t;
/*    cin>>a;
   t= fact(a);
    cout<<"fact:"<<t<<endl;
  */
    
    int *p;
  p= sortm();
    for(int i=0;i<5;i++)
    {cout<<*p;
        p++;}
    return 0;
}
