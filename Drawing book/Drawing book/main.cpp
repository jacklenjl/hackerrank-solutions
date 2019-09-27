
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {

    int n,p,count=0,count2=0;
    cin>>n>>p;
    
    for(int i=1;i<=n;i+=2)
    {
        
       
        if(p<i||p==i)
            break;
         count++;
    }
    for(int i=n;i>=1;i-=2)
    {
        
        
        if((p<i))
        {if(i-1==p)
        break;}
        if(i==p)
            break;
        count2++;
    }
    
    //cout<<"count:"<<count<<"count2:"<<count2;
    
    
    if(count<count2)
        cout<<count;
    else
        cout<<count2;
    
    
  
    
    
    return 0;
}
