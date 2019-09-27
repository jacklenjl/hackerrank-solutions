
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   
    int n,count=1;
    cin>>n;
    int a[n];
    int f;
    f=n*4;
    int x[f];
    for(int k=0;k<f;k++)
        x[k]=-1;
    for(int i=0;i<n;i++)
    {
    
        cin>>a[i];
    
    }
  
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int t;
            t=a[i];
            if(a[i]>a[j])
            {
                a[i]=a[j];
                a[j]=t;
            }
                
                }
    
    }
    
    
   
   
    
    int i=0,j=0;
 
    
    
    
    
    
    do{
      
        
        if(x[j]==-1)
        {x[j]=a[i];
            x[j+1]=count;
            goto go;}
        else if(x[j]==a[i])
        {
            count++;
            x[j+1]=count;
            
        
        }
    else
    {
        j+=2;
        x[j]=a[i];
        count=1;
        x[j+1]=count;
        
    }
    go:
        //cout<<"hay"<<endl<<"x[]:"<<x[j]<<endl<<"count"<<count<<endl;
        i++;
    
        
    }while(i<n);
    
    //for(int i=0;i<f;i++)
    //{
    
      //  cout<<"x:"<<x[i]<<endl;
    //}
    
    
    
    
    
    int q,pos=-1;
    cin>>q;
    int fun[q];
    for(int i=0;i<q;i++)
    {cin>>fun[i];}
   
    
    int run=0;
    
    do{
        q--;
        
        //cout<<"check:"<<check<<endl;
        //cout<<"fun 1:"<<fun[run]<<endl;
        for(int i=0;i<f;i+=2)
        {
            //cout<<"hay"<<endl;
        if(fun[run]==x[i])
        {
            
            //cout<<"fun:"<<fun[run]<<endl;
            //cout<<"hay"<<endl;
            pos=i; break;
        }
            else
            { pos=-1;}
        }
        
        if(pos==-1)
        {cout<<"NOT PRESENT"<<endl;
            pos=-1;}else
        {cout<<x[pos+1]<<endl;
            pos=-1;
        }
        run++;
    }while(q>0);
    
    
    
    return 0;
}
