

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int a[n];
    int d,m,sum=0,count=0,k=0;
    
    for(int i=0;i<n;i++)
    {cin>>a[i];}
    cin>>d>>m;
    
    for(int i=0;i<n;i++)
    {  for(int j=0;j<m;j++)
        {
            if((n-i)>=m)
            sum=a[i+j]+sum;
            else
            {k=1; break;}
        }
        //cout<<"sum:"<<sum<<endl;
        if(k==1)
        {break;}
        
        if(sum==d)
        {  count++;
            sum=0;
        }
        
        sum=0;
    }
            
        
    
    cout<<count;
    
    return 0;
}
