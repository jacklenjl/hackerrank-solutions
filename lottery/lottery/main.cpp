//
//  main.cpp
//  lottery
//
//  Created by Jack Len on 1/28/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
 long   int n,count=0;
    cin>>n;
    string id[n],id2[0];
  long  int sum[n],finalsum[n];
    char checkme[10]={'0','1','2','3','4','5','6','7','8','9'};
    char checkmechange[10];
    for(long int i=0;i<n;i++)
    { cin>>id[i];
        sum[i]=0;
        finalsum[i]=0;
    }
    
    
    for(long int p=0;p<n;p++){
        for(long int o=0;o<10;o++)
        {checkmechange[o]=checkme[o];}
     
    for(long int i=0;i<id[p].length();i++)
    {
        //cout<<id[p].at(i)<<endl;
        for(long int j=0;j<10;j++)
        { if(id[p].at(i)==checkmechange[j])
        {sum[p]=sum[p]+((int)checkmechange[j]-48);
           // cout<<"sum"<<sum[p]<<endl;
            checkmechange[j]=0;
        }
            }
            
        
        
    }
        for(long int g=0;g<n;g++)
        {
            if(p==g)
                continue;
            for(long int d=0;d<n;d++)
            {   finalsum[d]=0;
            }
            for(long int i=0;i<id[g].length();i++)
            {
                //cout<<id[p].at(i)<<endl;
                for(long int j=0;j<10;j++)
                { if(id[g].at(i)==checkmechange[j])
                {finalsum[g]=finalsum[g]+((int)checkmechange[j]-48);
                    //cout<<"finalsum"<<finalsum[g]<<endl;
                    checkmechange[j]=0;
                }
                }
                
                
                
            }
            //cout<<"finalsum="<<finalsum[g]<<endl;
            if((sum[p]+finalsum[g])==45)
            {
               // cout<<"p="<<p<<" g="<<g<<" pair="<<sum[p]+finalsum[g]<<" sum="<<sum[p]<<" finalsum="<<finalsum[g]<<endl;
                count++;}
        }
        
        /*for(int d=0;d<n;d++)
        {   finalsum[d]=0;
        }*/
        
    }
    
    cout<<count<<endl;
   
    
    return 0;
}
