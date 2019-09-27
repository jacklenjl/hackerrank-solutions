
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
   long long int n,r,q;
    cin>>n>>r>>q;
  long long  int a[n];
   long long int b[q];
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(long long int i=0;i<q;i++)
    {
        cin>>b[i];
        
    }
   long long  int m=n-2,t=a[n-1];
    for(long long int i=0;i<r;i++)
    {
        for(long long int j=n-1;j>=0;j--)
        {
            
            
            //cout<<"j:"<<j<<" "<<"m:"<<m<<endl;
            //cout<<"a[j]:"<<a[j]<<" "<<"a[m]:"<<a[m]<<endl;
            a[j]=a[m];
            //cout<<"a[j swap]:"<<a[j]<<" "<<"a[m swap]:"<<a[m]<<endl;
            
            if(j==1)
            {a[j-1]=t;break;}
            m--;
        }
        m=n-2;
        t=a[n-1];
         //cout<<endl;
    }
    
    for(long long int i=0;i<q;i++)
    {
        cout<<a[b[i]]<<endl;
        
    }
    return 0;
}
