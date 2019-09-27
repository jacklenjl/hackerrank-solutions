//
//  main.cpp
//  Library Fine
//
//  Created by Kunal Baghel on 5/27/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int d,m,y;
    int d2,m2,y2,fee=0;
    
    cin>>d>>m>>y;
    cin>>d2>>m2>>y2;
   
    if(d>d2 && m==m2 && y==y2)
        fee=(d-d2)*15;
    else if((d!=d2 || d==d2) && m>m2 && y==y2)
        fee=(m-m2)*500;
    else if((d!=d2 || d==d2) && (m!=m2 || m==m2) && y>y2)
        fee=(y-y2)*10000;
        else
        {cout<<fee;goto z;}
            
    
    
    
    
    
    
    cout<<fee;
    
    


    

z:
    
    return 0;
}
