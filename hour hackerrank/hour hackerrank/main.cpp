//
//  main.cpp
//  hour hackerrank
//
//  Created by Jack Len on 2/6/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    int t;
    cin>>t;
    do{
        cin>>s;
        //cout<<"s[0]="<<s[s.length()-1]<<endl;
        if(s[0]=='h' && s[1]=='y' && s[2]=='d' && s[3]=='r' && s[4]=='o' && s[s.length()-1]=='c' && s[s.length()-2]=='i')
        {cout<<"non-metal acid"<<endl;}
       else if(s[s.length()-1]=='c' && s[s.length()-2]=='i')
        {cout<<"polyatomic acid"<<endl;}
        else
        {cout<<"not an acid"<<endl;}
        t--;
        
    }while(t>0);
    return 0;
  
}
