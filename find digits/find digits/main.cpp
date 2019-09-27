//
//  main.cpp
//  find digits
//
//  Created by Jack Len on 5/20/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
 long   int t,num,y,count=0;
    cin>>t;
    int a[t];
    for(long int i=0;i<t;i++)
    {
        cin>>a[i];
        
    }
    for(long int i=0;i<t;i++)
    {
        count=0;
        //cout<<"a[i]:"<<a[i]<<endl;
        y=a[i];
        while(y!=0)
        {
        num=y%10;
           // cout<<"num:"<<num<<endl;
            if(num==0)
                goto a;
      else  if((a[i]%num)==0)
            count++;
        a:  y=y/10;
            
            
        }
        cout<<count<<endl;
        
    }
    
    return 0;
}
