#include<iostream>
using namespace std;
void changelist(int u,int v)
{int a[3][3];
    int i=0;
    a[u][i+1]=v;
    
    
    
    
}
int main()
{
    int mroad,u,v;
    cin>>mroad;
    int a[mroad][mroad];
    for(int i=0;i<mroad;i++)
    {for(int j=0;j<mroad;j++)
    {       a[i][j]=0;
    }}
    
    for(int i=0;i<mroad;i++)
    {
        cin>>u>>v;
        a[u][v]=v;
        
        
    }
    for(int i=0;i<mroad;i++)
    {
    for(int j=0;j<mroad;j++)
    { cout<<a[i][j]<<" ";}
        cout<<endl;
    }
}
