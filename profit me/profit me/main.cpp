#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findmax(int i,int k,int n,int p[])
{
    int temp=0;

if(k==1 && i<n)
{
    for(int j=i;j<n;j++)
    {
        temp=max(temp,p[j]);
    
    
    }
    
    
}



    return temp;}

int main() {
    int q,k,n,sell=0;
    cin>>q;
    do{
        cin>>k>>n;
        int p[n];
       sell=0;
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        
        //sort(p,p+n);
       
        for(int i=0;i<n;i++)
        {
            //cout<<"k:"<<k<<endl;
            //cout<<findmax(i, k, n, p);
            if(k==1 && i<n)
            {
                //cout<<"finadmax:"<<findmax(i, k, n, p)<<endl;
                //cout<<"sell:"<<sell<<endl;
                //cout<<"p[i]:"<<p[i]<<endl;
                sell=sell+(findmax(i, k, n, p)-p[i]);
                
                break;
            }
            //cout<<"finadmax:"<<findmax(i, k, n, p)<<endl;
            //cout<<"sell:"<<sell<<endl;
            //cout<<"p[i]:"<<p[i]<<endl;
            if(i==0)
                continue;
            if(p[i]>p[i-1])
            {sell=sell+(p[i]-p[i-1]);
            k--;
            }
            
            
            //buy=p[i+1];
            if(k==0)
                break;
        
        }
        
        cout<<sell<<endl;
        q--;
        
    }while(q>0);
    return 0;
}
