//
//  main.cpp
//  anagram
//
//  Created by Jack Len on 3/29/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1,s2;
  long  int count=0,ans=0;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        for(int j=0;j<s2.length();j++)
        {
            if(s1[i]==s2[j])
                count++;
            
            
        }
    }
    ans=ans+(((s1.length())-count)+((s2.length())-count));
    cout<<ans;
    return 0;
}

