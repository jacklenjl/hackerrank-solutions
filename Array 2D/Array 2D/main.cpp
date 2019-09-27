//
//  main.cpp
//  Array 2D
//
//  Created by Kunal Baghel on 6/2/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a[6][6];
    int fina[50];
    int sum=0,l=0;
    for(int i=0;i<6;i++)
    {   for(int j=0;j<6;j++)
    { cin>>a[i][j];}
    }
    
    
    
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<3;k++)
            { (sum=a[i][k+j]+sum);
                //cout<<"i:"<<i<<" "<<"k:"<<k+j<<endl;
            }
            
          
            //cout<<"mid sum:"<<"i:"<<i+1<<" "<<"j:"<<j+1<<endl;
            for(int m=0;m<3;m++)
            {sum=a[i+2][m+j]+sum;
            //cout<<"i:"<<i+2<<" "<<"m:"<<m+j<<endl;
            
            }
            sum=a[i+1][j+1]+sum;
            fina[l]=sum;
            l++;
            sum=0;
        }
        
        
        
       
    }
    
    int t=0;
    for(int i=0;i<16;i++)
    {
        for(int j=i;j<16;j++)
        {
            t=fina[i];
            if(fina[i]<fina[j])
            {
                fina[i]=fina[j];
                fina[j]=t;
            }
        
        
        }
        
    }
    
    cout<<fina[0];
    

    return 0;
}
