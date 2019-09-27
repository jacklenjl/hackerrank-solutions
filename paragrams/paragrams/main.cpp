//
//  main.cpp
//  paragrams
//
//  Created by Kunal Baghel on 6/18/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
   
    string s;
    getline(cin,s);
    int count=0;
    //cout<<s;
    string low={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string uper={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<s.length();j++)
        {
           if(s[j]==low[i]||s[j]==uper[i])
            {
                count++;
                break;
                
            }
        }
    
    }
    if(count==26)
    {cout<<"pangram";}
    else
    cout<<"not pangram";
    return 0;
}
