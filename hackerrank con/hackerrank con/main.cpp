//
//  main.cpp
//  hackerrank con
//
//  Created by Jack Len on 1/26/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
/*int main() {
    int n;
    cin>>n;
    string name[n];
    int d[n],j[n],sum=0,x=0;
    int  diff[n];
    for(int i=0;i<n;i++)
    { cin>>name[i]>>d[i]>>j[i];
        diff[i]=j[i]-d[i];
        
    }
    sum=diff[0];x=0;
    for(int i=0;i<n;i++)
    {
        if(sum<diff[i])
        { sum=diff[i];x=i;}
        
    }
    cout<<name[x]<<" "<<diff[x];
    
    return 0;
}*/
int main() {
    int n,count=0;
    cin>>n;
    string id[n],id2[0],sum[10];
    char k[10]={'0','1','2','3','4','5','6','7','8','9'};
    for(int i=0;i<n;i++)
        cin>>id[i];
    
    
    for(int g=0;g<n;g++){
    for(int i=0;i<id[g].length();i++)
    {
        //cout<<id[i].length()<<endl;
        for(int j=0;j<10;j++)
        {  if((id[i].at(i))==k[j])
            { count++;sum[i]=k[j];}
        }
        
    }
    }
    cout<<count;
    return 0;
}


