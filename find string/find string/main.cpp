//
//  main.cpp
//  find string
//
//  Created by Kunal Baghel on 7/25/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
   
    int n,q;
    cin>>n;
    cout<<endl;
    string a[n];
    
    for(int i=0;i<n;i++)
    {
    
        cin>>a[i];
    
    }
    cin>>q;
    string p[q];
    
    int count=0;
    for(int i=0;i<q;i++)
    {
        cin>>p[i];
        for(int j=0;j<n;j++)
        {
            //cout<<"p[i]:"<<p[i]<<" "<<"a[j]:"<<a[j]<<endl;
        if(p[i]==a[j])
            count++;
            
        }
        cout<<count<<endl;
        count=0;
        
    }
    
    
    return 0;
}
