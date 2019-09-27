#include<iostream>
#include<queue>
using namespace std;
int testrain()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
  //cout<<"*p:"<<*p<<" *q:"<<*q<<endl;
    int j=0;
                for(int i=1;i<=7;i++)
                    {   
                        if(a[j]!=i)
                        return 1;
                        else
                        {
                        while(a[j]==i)
                        j++;
                        }

                    }

//cout<<"7 check complete"<<endl;
        for(int i=0;i<=n/2;i++)
        {
                           if(a[i]!=a[n-1-i]&& a[i]>0 && a[i]<8)
                           return 1;

        }

        return 0;
}


int main()
{

int t,n;
cin>>t;
for(int i=0;i<t;i++){


int x=testrain();
//cout<<"x:"<<x<<endl;
if(x==0)
cout<<"yes"<<endl;
else
{
    cout<<"no"<<endl;
}


}

}
/*int main()
{
int t,n;
int a[101];
//queue <string> q;

cin>>t;
while(t!=0){
cin>>n;
//int a[n];
int sum=0;
int test=1,pos=0;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int j=0;int x=0;
for(int i=1; i<=7; i++)
    {
        if (a[j]!=i)
            x=1;
        while(a[j]==i)
            j++;
    }

//cout<<"x:"<<x<<endl;

if(x==1)
goto checkme;
//cout<<test;
else{
   // cout<<"innerloop"<<endl;
int *p,*u;
p=&a[0];
u=&a[n-1];

//cout<<"first:"<<*p<<" last:"<<*u<<endl;
for(int i=0;i<n/2;i++)
{
//cout<<"first:"<<*p<<" last:"<<*u<<endl;
if(*p==*u)
{x=0;}
else
{x=1;
    break;
}
p++;
u--;
}}
checkme:{
if(x==0)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
}



t--;
}



}*/
