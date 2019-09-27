#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


/*int main() {
    float n,k,x,d,q,sum=0,test;
    
    cin>>q;
    do{
        cin>>n>>k>>x>>d;
        float p;
        for(int i=0;i<n;i++)
        {
            cin>>p;
            test=(p/100)*x;
            sum=sum+max(k,test);
            
        }
        cout<<endl<<"sum:"<<sum<<endl;
        if(sum>d )
            cout<<"upfront"<<endl;
        else
            cout<<"fee"<<endl;
        sum=0;
        q--;
    }while(q>0);
    return 0;
}*/
int main() {
    long long int n,money,count=0;
    cin>>n;
   long long int p[n],a[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>p[i];
        a[i]=p[i];
        
    }
    sort(p,p+n);
      cin>>money;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        if(p[i]==a[j])
        {int x;
            x=j;
            for(int k=0;k<=x;k++)
            {
                money=money-p[i];
                //cout<<"p[i]:"<<p[i]<<endl;
                count++;
                //cout<<"money:"<<money<<endl;
                if(money<=0)
                {count--;break;}
            
            }
        }
    
    }
  
   
   
    cout<<count;
    return 0;
}
