//
//  main.cpp
//  grade system
//
//  Created by Jack Len on 5/19/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a,x;
    
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
       
        
    }
    
    for(int i=0;i<a;i++)
    {x=0;
        x=b[i]/5;
        x++;
        //cout<<"x:"<<x<<endl;
        if((b[i])<=37)
            cout<<b[i]<<endl;
        else if((b[i]%5)==0)
            cout<<b[i]<<endl;
        else if(((5*x)-b[i])<3)
            cout<<x*5<<endl;
        else if(((5*x)-b[i])==3 )
            cout<<b[i]<<endl;
        else
            cout<<b[i]<<endl;
    }
    
    
    
    return 0;
}
