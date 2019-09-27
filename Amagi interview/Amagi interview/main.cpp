//
//  main.cpp
//  Amagi interview
//
//  Created by Kunal Baghel on 6/9/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    /*int a[5]={1,2,3,4,5};int x=0,i=4,j=0;
    do{
    
        cout<<a[i]<<a[j];
        i--;j++;
        if(i==j)
        { cout<<a[i];
            x=1;}
        
        
        
    }while(x==0);
    
    
    */
    
    int p=0;
    string str,str2;
    getline(cin, str);
    
    str2="the";
    
    int x,m=0;
    x=(int)str2.length();
    x--;
   
    
    for(int i=0;i<str.length();i++)
    {
    
    //if(str[i]==str2[0] && str[i+x]==str2[x])
      if(str[i]==str2[0])
      {for(int j=0;j<str2.length();j++)
          {
         if( str[i+j]==str2[j])
         {m=1;}
              else
              { m=0;break;}
          }
        
          p=p+m;}
       
       
       
    }
    
    cout<<"p:"<<p;
    
    
    return 0;
}
