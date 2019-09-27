#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
  long long  int n,m;
    cin>>n>>m;
  long long  int a,b,k;
 long long   int op=m;
    
 long long   int sum[n];
for(int i=0;i<n;i++)
{sum[i]=0;}
  long long  int max=0;
    //op=1;
    while(op!=0)
    {
        cin>>a>>b>>k;
        for(long long int i=(a-1);i<b;i++)
        {
        sum[i]=sum[i]+k;
            //cout<<"a:"<<a<<" i:"<<i<<" sum[i]:"<<sum[i]<<endl;
            if(max<sum[i])
            {max=sum[i];}
        
        }
        op--;
    }
   
    cout<<max<<endl;
    

    return 0;
}

