//
//  main.cpp
//  Algorithmic Crush
//
//  Created by Kunal Baghel on 7/25/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   
    long long n,m;
    cin>>n>>m;
    long long a,b,k;
    long long maxval=0;
    long long p[n];
    for(long long i=1;i<=n;i++)
    {
        
        p[i]=0;
        //cout<<i<<endl;
    }
    do{
        
        cin>>a>>b>>k;
        for(long long i=a;i<=b;i++)
        {
            p[i]=p[i]+k;
            maxval=max(maxval,p[i]);
        }
        a=0;b=0;k=0;
        m--;
    }while(m!=0);
    
    cout<<maxval;
    return 0;

}
