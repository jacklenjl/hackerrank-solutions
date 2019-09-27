#include <iostream>
using namespace std;


int main()
{
    long long  int Nostud,Mdoughts,Testcase;
    long long int roll,min,count=1;
    cin>>Testcase;
    do{
        
        cin>>Nostud>>Mdoughts;
        long long int sum[Mdoughts],dur[Mdoughts];
        for(long long int i=0;i<Mdoughts;i++)
        {
            cin>>roll>>dur[i]>>min;
            sum[i]=dur[i]+min;
            if(i==0)
                continue;
            for(long long j=i-1;j<=i;j++)
            {if(sum[i]>sum[j-1] && dur[i]>dur[j-1])
            {
                {}
            }
                else
                { count++;break;}
                
            }
            
        }
        cout<<count;
        count=1;
        Testcase--;
    }while(Testcase>0);
    
    return 0;
}

/*int main()
{
    long long  int Nostud,Mdoughts,Testcase;
    long long int roll,min,count=1;
    cin>>Testcase;
    do{
        
        cin>>Nostud>>Mdoughts;
        long long int sum[Mdoughts],dur[Mdoughts];
        for(long long int i=0;i<Mdoughts;i++)
        {
            cin>>roll>>dur[i]>>min;
            sum[i]=dur[i]+min;
            if(i==0)
                continue;
            else if(sum[i]>dur[i-1])
                count++;
            
        }
        cout<<count;
        count=1;
        Testcase--;
    }while(Testcase>0);
    
    return 0;
}*/



/*int main()
{
    
   int t;cin>>t;
    do{
    int num,sum=0,x=0;
        cin>>num;
       
           
        for(  int i=1;i<=num;i++)
        {
            if((i+1)%2==0)
            {
                sum=(sum+(i)*(i+1));
                 //cout<<sum<<endl;
                x=max(sum,x);
            }
            else
            {
                sum=(sum+(-1*((i)*(i+1))));
                 //cout<<sum<<endl;
                x=max(sum,x);
            }
        }
        
        //cout<<sum;
        cout<<x;
        //cout<<sum<<endl;
        
        t--;
    }while(t>0);
    
    
}*/



/*int main()
{

  long long  int t;
    cin>>t;
    do{
       long long  int num,sum;
        cin>>num;
 if(num%2==0)
        num=(num/2);
 else
 {num=num+1;
 num=(num/2);
 }
 
 sum=2*(num*num);
        cout<<sum;
        
        t--;
    }while(t>0);

}*/
