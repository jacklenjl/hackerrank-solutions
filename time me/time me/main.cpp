//
//  main.cpp
//  time me
//
//  Created by Kunal Baghel on 5/23/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    string a,b,c;
    cin>>a;
    b=a[8];
    c="P";
    char n1,n2;
    int sum,x,y,sum1;
    n1=a[0];
    n2=a[1];
    
    x=(int)n1;
    y=(int)n2;
    x-=48;
    y-=48;

    sum=(x*10)+y;
    sum1=sum;
    sum+=12;
  
    
    if((b.compare(c))==0)
    {
        if(sum1==12&&((b.compare(c))==0))
        {
            cout<<sum1<<a[2]<<a[3]<<a[4]<<a[5]<<a[6]<<a[7];goto jay;
        }
        else
            cout<<sum<<a[2]<<a[3]<<a[4]<<a[5]<<a[6]<<a[7];goto jay;
        }
    if(sum==24)
    {
        sum=00;
        cout<<sum<<sum<<a[2]<<a[3]<<a[4]<<a[5]<<a[6]<<a[7];
        goto jay;
    }
    else
    {
     if(sum1<10)
        
        cout<<0<<sum1<<a[2]<<a[3]<<a[4]<<a[5]<<a[6]<<a[7];
    else
        cout<<sum1<<a[2]<<a[3]<<a[4]<<a[5]<<a[6]<<a[7];
    }jay:
    
    return 0;
}
