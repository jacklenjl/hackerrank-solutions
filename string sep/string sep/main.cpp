//
//  main.cpp
//  string sep
//
//  Created by Kunal Baghel on 3/1/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    int n;
    cin>>n;
    string str;
  //  string str2[10000];
  
    
     for(int i=0;i<n;i++)
    {
        cin>>str;
        
        for(int j=0;j<str.length();j++)
        {
        if(j%2==0)
            cout<<str[j];
        else
            continue;
        }
        cout<<' ';
        
        for(int k=0;k<str.length();k++)
        {
        if(k%2==1)
            cout<<str[k];
            else
                continue;
        
        }
        cout<<endl;
    }
    
    
    
    return 0;
}
