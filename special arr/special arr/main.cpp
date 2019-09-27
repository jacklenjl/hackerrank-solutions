

/*#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,x;
     int n,sum=0,count=0,k=0;
    cin>>t;
    x=t;
    int fin[t];
    do{
        n=0;sum=0;count=0;k=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        { cin>>a[i];
            
            if(i>0)
            {  if(a[i-1]==a[i])
                count++;
            else
            {
                {b[k]=count;
                    k++;count=0;
                }}
            }
            
        }
        
        //for(int i=0;i<k;i++)
           // cout<<"b[i]:"<<b[i]<<endl;
        
        
        
        for(int i=0;i<k;i++)
        {if(b[i]==0 && i>0)
            sum++;
            for(int j=b[i];j>0;j--)
            {       sum=sum+j;
            }}
        
        
        fin[t]=sum+n;
        t--;
    }while (t>0);
    
    for(int i=x;i>0;i--)
    {
        cout<<fin[i]<<endl;
    }
    
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n[100001],t,count=1,m;
    int sum[10];
    for(int i=0;i<t;i++)
        sum[i]=0;
    //cout<<"enter the number of test cases";
    cin>>t;
    //cout<<"enter the size of the array";
    for(int k=0;k<t;k++)
    {
        count=1;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>n[i];
        }
        for(int i=m;i<100001;i++)
            n[i]=0;
        for(int i=1;i<=m;i++)
        {
            if(n[i]==n[i-1])
            {
                count++;
            }
            if(n[i]!=n[i-1])
            {
                sum[k]+=count*(count+1)/2;
                count=1;
                //    cout<<sum<<" ";
            }
        }
    }
    for(int i=0;i<t;i++)
        cout<<sum[i]<<"\n";
    return(0);}*/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int t;
    int count=1,k=0;
    cin>>t;
    int sum[t];
    for(int o=0;o<t;o++)
        sum[o]=0;
    
    int n[10000];
    for(int h=0;h<t;h++)
    {
        count=1;
        cin>>k;
        
        for(int j=0;j<k;j++)
        {  cin>>n[j];}
        for(int i=1;i<=k;i++)
        {
            if(n[i-1]==n[i])
                count++;
            if(n[i]!=n[i-1])
            {sum[h]+=count*(count+1)/2;
                count=1;
                
            }
            
        }
        
    }
    
    for(int i=0;i<t;i++)
        cout<<sum[i]<<endl;
}

