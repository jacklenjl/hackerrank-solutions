//
//  main.cpp
//  door unlock game
//
//  Created by Jack Len on 2/12/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,count=0,finalcount=0;
    cin>>n;
    int a[n];
    int *y;
    
    for(int i=0;i<n;i++)
    {cin>>a[i];
        if(a[i]==1)
        {count++;}
    }
    y=&a[0];
    for(int i=0;i<n;i++,y++)
    {
        if(*y==0)
        {   continue;}
        else if(*y==1)
        {   *y=0;
            finalcount++;
           //cout<<"a[i]:"<<*y<<" final:"<<finalcount<<" i:"<<i<<endl;
            y++;
            *y=0;
            y--;
        }
        
    }
    //for(int i=0;i<n;i++)
      //  cout<<"a[i]:"<<a[i]<<endl;
    
    cout<<finalcount<<" "<<count;
    return 0;
}
