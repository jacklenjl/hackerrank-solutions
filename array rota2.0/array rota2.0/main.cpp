//
//  main.cpp
//  array rota2.0
//
//  Created by Kunal Baghel on 6/2/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    long n,b;
    cin>>n>>b;
    
    
    long a[n];
    long fina[n];
    for(long i=0;i<n;i++)
    {cin>>a[i];}
    
    for(long i=0;i<n;i++)
    {fina[((i + n - b) % n)]=a[i];}
    
    for(long i=0;i<n;i++)
    {
    
        cout<<fina[i]<<" ";
    }
    
    return 0;
}
