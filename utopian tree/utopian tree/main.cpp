//
//  main.cpp
//  utopian tree
//
//  Created by Kunal Baghel on 9/18/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,t,sum=1;
    cin>>t;
    
    do
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
        
            if(i%2==0)
            {sum=sum+1;
            //    cout<<"summer:"<<sum<<endl;
            }
            else
            {sum=sum*2;
            //cout<<"spring:"<<sum<<endl;
            }
        }
        cout<<sum;
        sum=1;
        t--;
    }while(t>0);
    return 0;
}
