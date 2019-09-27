

/*#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,v;
    cin>>n;
    int p[n];
    for(int i=1;i<=n;i++)
    {
        cin>>v;
        p[v]=i;}
    
    
    for(int i=1;i<=n;i++)
    {
       
        int y=p[p[i]];
        cout <<y<<endl;
        }
    
    


return 0;
}*/
/*#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,k;
    cin>>n>>k;
    int p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    int jump=0,e=100;
    
    for(int i=0;i<e;i++)
    {
        jump=jump+k;
        //cout<<"jump:"<<jump<<endl;

        if(jump>=n)
        {jump=0;}
        
            
        
        
        
        if(p[jump]==1)
        {   e=e-3;
            //cout<<"e1:"<<e<<endl;
            
        }
        else
        { e=e-1;
            //cout<<"e2:"<<e<<endl;
        }
        if(jump==0)
            break;
    }
    
    cout<<e<<endl;
    return 0;
    
}*/

/*#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
  long long  int n,c=0,l,x,k,add=0;
    cin>>s;
    cin>>n;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
            c++;
        
    }
    if(c!=0){
     l=s.length();
     x=n/l;
     k=n%l;
        for(int i=0;i<k;i++)
        {
           if(s[i]=='a')
               add++;
            
        }
    cout<<x*c+add<<endl;
    }
    else
        cout<<0;
    //cout<<"c:"<<c<<" x:"<<x<<" k:"<<k<<" l:"<<l<<endl;
    return 0;
}
*/


//Minium Distance

/*#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    long long int n,g=0;
    cin>>n;
    long long  int a[n],k=n;
    for(long long int i=0;i<n;i++)
        cin>>a[i];
    
    for(long long int i=0;i<n;i++)
    {
        for(long long int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {   g=j-i;     break;}
            
            
        }
        if(k>g&&g!=0)
            k=g;
        
        
        
    }
    
    if(g==0)
        cout<<-1;
    else
        cout<<k;
    
    return 0;}
*/
/*
 #include <iostream>
using namespace std;

void update(int *a,int *b) {
    *a=*a+*b;
    *b=*a-*b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    
    return 0;
}
*/

/*#include <iostream>
using namespace std;
int main() {
long long int q,n;
    cin>>q>>n;
   
    

   
        
    
    do{
     long long    int c[n];
      long long   int b[n];
     long long    int g[n];
      long long   int flag=0,k=0;
    //cout<<"n:"<<n<<endl;
    
    for(long long int i=0;i<n;i++)
    {
        c[i]=i;
        g[i]=0;
        for(long long int j=0;j<n;j++)
        {
          long long  int x;
        cin>>x;
            
        b[k]=x;
           // cout<<"b[k]:"<<b[k]<<endl;

            g[i]=g[i]+b[k];
            k++;
        }}
    
    k=0;
    
  long long   int v[n],sum=0;
    
    for(long long int i=0;i<n;i++)
    {
        //cout<<"container:"<<c[i]<<endl;
        
        k=0;
        for(long long int j=0;j<n;j++)
        {
           
            //cout<<"i+k:"<<i+k<<endl;
            sum=sum+b[k+i];
            
            
         
             k=+2;
        }
        k=0;
        v[i]=sum;
        sum=0;
        
    }
    
    sort(v,v+n);
    sort(g,g+n);
    int temp;
        for(int i=0;i<n;i++)
        {
            cout<<"v[i]:"<<v[i]<<endl;
            cout<<"g[i]:"<<g[i]<<endl;
            
            
        }
        
        
    for(int i=0;i<n;i++)
    {
        
 
        if(v[i]==g[i])
        {flag=1;}
        else
            flag=0;
        
    
        }
    if(flag==1)
        cout<<"Possible"<<endl;
    else
        cout<<"Impossible"<<endl;
        q--;
}while(q!=0);
    return 0;}
*/

#include <iostream>
using namespace std;
int main() {
    
    int q,n;
    cin>>n;
    int a[n][n],c[n],sum=0;
    
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
        {
            
            cin>>a[i][j];
            sum=a[i][j]+sum;
        }
        c[i]=sum;
        sum=0;
    }
    int p[n];
    sum=0;
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
    {
        sum=a[j][i]+sum;
    }
        p[i]=sum;
        sum=0;
    }
    
    sort(c,c+n);
    sort(p,p+n);
    int flag=0;
    for(int i=0;i<n;i++)
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
    
    
    
    
    
    
    
        return 0;
}


