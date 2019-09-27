#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


/*int main() {
    int n,m,s,sum=0,count=-1;
    int temp=0;
    cin>>s>>n>>m;
    int a[n],p[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    
    for(int i=0;i<m;i++)
    {
        cin>>p[i];
        
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            
            temp=a[i]+p[j];
           // cout<<"temp:"<<temp<<" "<<"i:"<<a[i]<<" "<<"j:"<<p[j]<<endl;
            if(temp<=s)
            {count=max(temp,count);}
            else if(temp==s)
            {break;}
            
        }
        
    }
    cout<<count;
    
    return 0;
}*/

string checkme(string a,string b,string c)
{
    
    for(int i=0;i<b.length();i++)
    {
    
    if(a[0]==b[i]||c[0]==b[i])
    {
    
    }
        else
        { b.append(a);
            b.append(c);
        }    }



return <#expression#>}

int main()
{
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    int roadconnect[m];
    int road[n];
    string a,b,c;
    
    for(int i=0;i<m;i++)
    {
        cin>>a>>c;
        checkme(a,b,c);
    
    }




}
