

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    int temp=a[n-1];
    
    //cout<<"temp:"<<temp<<endl;
        for(int j=n-2;j>=-1;j--)
        {int p=0;
            if(a[j]>temp)
            { a[j+1]=a[j];
                //cout<<"a[j+1]:"<<a[j+1]<<" "<<"a[j]:"<<a[j]<<" "<<"temp:"<<temp<<endl;
            }
            
            else
             {  a[j+1]=temp; p=1;}
            
            
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
                
            }
            if(p==1)
                break;
            
            cout<<endl;
            
            
        }
        
        
    
    
    
    
    return 0;
}
