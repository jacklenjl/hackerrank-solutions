#include<iostream>
using namespace std;

struct edge{
int startv;
int endv;


};

edge* vert[8];

void insert(int n)
{
   
for(int i=0;i<n;i++)
{
    vert[i]=new edge;
    
    cout<<"Enter the first grap coordinates:\n";

cin>>vert[i]->startv;
cin>>vert[i]->endv;


}
}
void routemake(int n,int startpos,int a[])
{
    int temp=startpos;
    int temp2=startpos;
    int count=0;
    int y=0;
    int check=0;
    int check2=0;

while(temp!=n+1){
    cout<<" new coords are:"<<temp<<" "<<temp2<<endl;
if(check==0){
for(int i=0;i<n;i++)
{
    
    cout<<"Connected nodes are:"<<a[temp-1]<<" "<<a[temp]<<endl;
    if((vert[i]->startv==a[temp-1]&&vert[i]->endv==a[temp])||(vert[i]->endv==a[temp-1]&&vert[i]->startv==a[temp]))
{y++;
//cout<<vert[i]->startv<<" "<<vert[i]->endv<<"\n";
cout<<"increment";
check=0;
break;}
else
{
    check=1;
}


}

}
temp=temp+1;}
while(temp2!=0){
cout<<"\n temp2:"<<temp2;
if(temp2==0)
{}
else{
    if(check2==0){
    for(int i=0;i<n;i++)
{   
if(temp2-1==0)
break;
cout<<"Connected nodes are:"<<a[temp2-1]<<" "<<a[temp2-2]<<endl;
if((vert[i]->startv==a[temp2-1]&&vert[i]->endv==a[temp2-2])||(vert[i]->startv==a[temp2-2]&&vert[i]->endv==a[temp2-1]))
{y++;
cout<<"decrement\n";check2=0;
cout<<vert[i]->startv<<" "<<vert[i]->endv<<"\n";
break;}
else
{
    check2=1;
}

}


}
temp2=temp2-1;
}
cout<<"\nfinal routes are:"<<endl;
cout<<y<<endl;

}}

int main()
{

int n,j;
cout<<"\nEnter the no of cities:"<<endl;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
a[i]=i+1;
insert(n);
cout<<"\nEnter the start city to create route:"<<endl;
cin>>j;
routemake(n,j,a);cout<<endl;
}
