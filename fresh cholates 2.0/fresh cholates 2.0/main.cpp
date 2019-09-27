//
//  main.cpp
//  fresh cholates 2.0
//
//  Created by Kunal Baghel on 5/31/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;

int fina(int arr[] ,int team,int packet)
{int n=0,sum=0;
    int k=packet;
    
    for(int i=0;i<team;i++)
    {
      
        sum=arr[i]%packet;
        if(i==(team-1)&&sum==0)
        {break;}
        k=k-sum;
    if(k!=packet)
    {
        if(arr[i+1]>=k)
        {arr[i+1]=arr[i+1]-k;k=packet;}
        else
        {k=k-arr[i+1];arr[i]=0;i++;}
            }
        
    else
        n++;
    }
    return n;}

int main(int argc, const char * argv[]) {
   
    
    int caseno,team,packet,k=0,sum=0,n=1,zer=0,caseme=0,finalans[10000];
    
    cin>>caseno;
    do{
    cin>>team>>packet;
        k=packet,sum=0,n=1,zer=0;
    int arr[team];
    for(int i=0;i<team;i++)
    {
    
        cin>>arr[i];
        zer=arr[i]+zer;
    
    
    }
    
        
    for(int i=0;i<team;i++)
    {
        
        sum=arr[i]%packet;
        //cout<<"sum:"<<sum<<endl;
        if(sum==0)
        { n++;arr[i]=0;}
    
    }
   
    for(int i=0;i<team;i++)
    {
    
        for(int j=i+1;j<team;j++)
        {
           int t=arr[i];
            if(arr[i]<arr[j])
            {arr[i]=arr[j];
                arr[j]=t;
            }
        
        }
    
    }
        int y=0;
        
        for(int i=0;i<team;i++)
        {
            
            if(arr[i]==0)
            {}
            else
                y++;
            //cout<<"arr["<<i<<"]:"<<arr[i]<<endl;
        
        }
        int goog[y];
        
        for(int i=0;i<team;i++)
        {
            
            if(arr[i]==0)
            {}
            else
                goog[i]=arr[i];
                
                
                //cout<<"arr["<<i<<"]:"<<arr[i]<<endl;
                
                }
        for(int i=0;i<y;i++)
        {
            
           
            
            
            
            //cout<<"goog["<<i<<"]:"<<goog[i]<<endl;
            
        }
        
        //cout<<"y:"<<y<<endl;
        int x=0;
        
    if(zer==packet)
    {finalans[caseme]=n+x;}
    else
    {
        x=fina(goog,y,packet);
        finalans[caseme]=n+x;}
    //cout<<"Case #"<<caseme+1<<":"<<" "<<n+x<<endl;
        caseme++;
    }while(caseme<caseno);
    
    for(int i=0;i<caseme;i++)
    {
        cout<<"Case #"<<i+1<<":"<<" "<<finalans[i]<<endl;
    }
    
    
    return 0;
}
