

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];}
    sort(a,a+n);
    int k=0;
   // for(int i=0;i<n;i++)
    //{cout<<" "<<a[i];}
   // cout<<endl;
    for(int i=n-1;i>=0;i--)
    {
        //cout<<"a[i]:"<<a[i]<<endl;
        for(int j=i-1;j>=0;j--)
        {
            //cout<<"a[i]-a[j]:"<<(a[i]-a[j])<<endl;
          if(((a[i]-a[j])<=1))
          {count++;
              //cout<<"count:"<<count<<endl;
              
          }
            else
            {break;}
              
        }
        if(k<count)
        { k=count;}count=0;
        //cout<<"k:"<<k<<endl;
    }
    cout<<k+1;
    
    return 0;
}
