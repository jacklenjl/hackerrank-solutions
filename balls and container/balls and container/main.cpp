/*#include <iostream>
using namespace std;
int main() {
    
   long long int q,n;
   
    cin>>q;
   
    
    do{
        cin>>n;
    long long int a[n][n],c[n],sum=0;
    
    for(long long int i=0;i<n;i++)
    {for(long long int j=0;j<n;j++)
    {
        
        cin>>a[i][j];
        sum=a[i][j]+sum;
    }
        c[i]=sum;
        sum=0;
    }
   long long  int p[n];
    sum=0;
    for(long long int i=0;i<n;i++)
    {for(long long int j=0;j<n;j++)
    {
        sum=a[j][i]+sum;
    }
        p[i]=sum;
        sum=0;
    }
    
    sort(c,c+n);
    sort(p,p+n);
   long long  int flag=0;
    for(long long int i=0;i<n;i++)
    {
        if(c[i]==p[i])
            flag=1;
        else
        {flag=0;break;}
        
    }
    
    if(flag==1)
        cout<<"Possible"<<endl;
    else
        cout<<"Impossible"<<endl;
        q--;
    }while(q!=0);
    
    
    
    
    
    return 0;
}
*/

/*#include <iostream>
using namespace std;
int main() {

    int n,t=0,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];}
    
    
    for(int i=1;i<=n;i++)
    {
        
        
    if(a[i-1]==i||a[i]==i)
    {
        
        continue;
        }
     
    else{
       
        do{
        cout<<"current a[i]:"<<a[i]<<" i:"<<i<<endl;
        
     for(int j=0;j<2;j++)
     {int temp,k;
         k=i-1;
         
         
     temp=a[k];
     a[k]=a[k+1];
     a[k+1]=a[k+2];
     a[k+2]=temp;
         for(int z=0;z<n;z++)
             cout<<a[z]<<" ";
         cout<<endl;
     
         
     }
            i=i+1;
            cout<<"new i:"<<i<<endl;
            
            for(int i=1;i<=n;i++)
            { if(a[i]==i)
            { t=1;continue;}
                else
                    t=0;
            }
            
            
            if(t==1)
                break;
            
        }while((i+2)<=n);
        cout<<"old i:"<<i<<endl;
        i=0;
        
        
        
        
        
        cout<<endl;
        }
        
    }
    
        
        
        

   /*int  i=0;
    for(int j=0;j<2;j++)
    {int temp;
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=a[i+2];
        a[i+2]=temp;

    }
    
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
 
    return 0;
    
}*/


/*#include <iostream>
using namespace std;
int main() {
    int q,flag=0;
    cin>>q;
    while(q>0){
        flag=0;
    int n,g=0;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {cin>>a[i];}

    for(int i=1;i<=n;i++)
    {
        if(a[i-1]==i)
        {//cout<<"test:"<<a[i-1]<<endl;
            continue;}
        else
        {int k=i;
            //cout<<"k start:"<<k<<endl;
            if((k+2)<n){
            while((k+2)<n)
            {  for(int j=0;j<2;j++)
            {
                int temp=a[k];
                a[k]=a[k+1];
                a[k+1]=a[k+2];
                a[k+2]=temp;
                cout<<"k:"<<k<<" i:"<<i<<endl;
                for(int z=0;z<n;z++)
                    cout<<a[z]<<" ";
                cout<<endl;
            }
                if((i+1)<=n)
                    i++;
                for(int p=1;p<=n;p++)
                {
                    if(a[p-1]==p)
                    { flag=0;continue;}
                    else
                    {flag=1;break;}
                }
                if(flag==1)
                {}
                else
                    k=k+n;
            
                k=i-1;
            }}
            else
            {g=1;}}
        if(flag==0)
            break;
        
        i=0;
    }
        for(int p=1;p<=n;p++)
        {
            if(a[p-1]==p)
            { flag=0;continue;}
            else
            {flag=1;break;}
        }
        if(flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        q--;
    }
    
    return 0;
}
*/
#include <iostream>
using namespace std;
int main() {
    string str,str2,sf="",ss="";
    int count=0,count2=0,count3=0;
    char alpha[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char alpha2[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cin>>str>>str2;
    for(int i=0;i<str.length();i++)
    {
        for(int j=0;j<26;j++)
        {
            
            if(str[i]==alpha[j])
            {cout<<"Str[i]:"<<str[i]<<" "<<"Str[j]:"<<alpha[j]<<endl;
                sf=sf+alpha[j];
                alpha[j]='0';
                count++;}
        }
        
    }
    for(int i=0;i<str2.length();i++)
    {
        for(int j=0;j<26;j++)
        {
            
            if(str2[i]==alpha2[j])
            {cout<<"Str[i]:"<<str[i]<<" "<<"Str[j]:"<<str[j]<<endl;
                ss=ss+alpha2[j];
                alpha2[j]='0';
                count2++;}
        }
        
    }
    for(int i=0;i<sf.length();i++)
    {
        for(int j=0;j<ss.length();j++)
        {
            if(sf[i]==ss[j])
            {count3++;}
        }
        
        
    }
    
    cout<<count3<<endl;
    return 0;
}



