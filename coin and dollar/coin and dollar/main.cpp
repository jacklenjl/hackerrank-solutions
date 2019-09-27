//
//  main.cpp
//  coin and dollar
//
//  Created by Jack Len on 1/7/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    int k,t,count=0;
    cin>>n>>k;
    int h=k;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t>k)
        {k=t;
            count=t;
        }
    }
    cout<<count-h;
    return 0;
}
