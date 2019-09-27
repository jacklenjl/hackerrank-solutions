
#include <iostream>
using namespace std;
 int check( long long int a[], long long int p[], long long int n)
{
   long long   int flag=0;
    for( long long int i=0;i<n;i++)
    {if(a[i]==p[i])
    {  flag=0;}
    else
    {flag=1;break;}
    }
    
    
    
    if(flag==0)
        return flag;
  
    else
        return 1;
}


int main(int argc, const char * argv[]) {
 long long int n,flag=0,t=-1;
    cin>>n;
    long long  int a[n],p[n],w[n];
    for( long long int i=0;i<n;i++)
    {
        cin>>a[i];
        p[i]=a[i];
        w[i]=a[i];
    }
    long long  int flag3=0;
   sort(p,p+n);
    flag3=check(a, p, n);
    
   
    long long int x=0;
  long long   int f=-1,m=0,flag2=0;
    for( long long int i=0;i<n;i++)
    {
        if(w[i]==p[i])
        {  }
        else
        {
            if(f==-1)
            { f=i;m=i;
                //cout<<"new f:"<<f<<endl;
                
            }
            else
            {  m++;x=i;}
            
        }
    }

       swap(a[f], a[x]);
    flag=check(a,p,n);
   //cout<<"non f:"<<f<<" m:"<<m<<" x:"<<x<<endl;;
 long long int start=f,end=m;
    
    while (start < end)
    {
      long long    int temp = w[start];
        w[start] = w[end];
        w[end] = temp;
        start++;
        end--;
    }
    flag2=check(w, p, n);
    
    /*for(int i=0;i<n;i++)
    {
        cout<<"w[]:"<<w[i]<<endl;
    }*/
    
    
    for( long long int i=0;i<n;i++)
    {if(w[i]==p[i])
    {  flag2=0;}
    else
    {flag2=1;break;}
    }
    
   
    if(flag==0||flag2==0||flag3==0)
        cout<<"yes"<<endl;
    if(flag==0)
        cout<<"swap "<<f+1<<" "<<x+1<<endl;
  else  if(flag2==0)
        cout<<"reverse "<<f+1<<" "<<m+1<<endl;
    else
    cout<<"no"<<endl;
    
 
   
    
    
    
    return 0;
}
