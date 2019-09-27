//
//  main.cpp
//  even odd rearrange in array
//
//  Created by Jack Len on 2/14/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,t,j,k=0;
    cin>>n;
    j=n;
    j--;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if((t%2)==1)
        {
            a[j]=t;
          
            j--;
        }
        else
        {a[k]=t;k++;}
        
    }
    
    for(int i=0;i<n;i++)
    {cout<<endl<<a[i]<<endl;}
    
    return 0;
}
