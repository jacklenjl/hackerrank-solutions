

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a[3][3];
    for(int i=0;i<3;i++)
    {for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
            
            
        }
    }
    int n[9]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++)
    {for(int j=0;j<3;j++)
        {
            for(int k=0;k<9;k++)
            {
               if ((a[i][j]-n[k])==0)
               {cout<<"a[i][j]:"<<a[i][j]<<" "<<"n[k]: "<<n[k]<<endl;
                   
                   n[k]=0;break;}
                
            }
            
        }
    }
    
    int m=0;
    for(int k=0;k<9;k++)
    {/*if(n[k]==0)
    {}
        else
        {m++;}
       */
        
        cout<<n[k]<<" ";
    }
    
    cout<<m<<endl;
        return 0;
}
