//
//  main.cpp
//  Non-Divisible Subset
//
//  Created by Kunal Baghel on 5/27/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    long long n,x;
    cin>>n>>x;
    int k[n];
    
    for(long i=0;i<n;i++)
    {
        cin>>k[i];
        
        
    }
    long sum=0;
    
    for(long i=0;i<n;i++)
    {  for(long j=i+1;j<n;j++)
    {
        
        if(((k[i]+k[j])%x)!=0)
            sum++;
        
    }
        
        
    }
    
    cout<<sum;
    return 0;


}
