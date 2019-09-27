//
//  main.cpp
//  kangaroo jump
//
//  Created by Jack Len on 5/19/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
   
    int x1,x2,v1,v2,jumpy=0,kan1=0,kan2=0;
    cin>>x1>>v1>>x2>>v2;
    kan1=x1;
    kan2=x2;
    if((x2>x1)&& (v2>v1))
    {cout<<"NO"<<endl;}
    else{
    
    do{
        kan1=kan1+v1;
        
        kan2=kan2+v2;
        //cout<<"kan1="<<kan1<<" "; cout<<"kan2="<<kan2<<endl;
        jumpy++;
        
        if(kan1==kan2)
        {cout<<"YES"<<endl; break;}
        
        if(jumpy==10000)
        {cout<<"NO"<<endl;  break;}
        
    }while(1);
    
    }
    
    
    
    
    return 0;
}
