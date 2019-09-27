#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int u=0;u<t;u++){
int m,x,y;int a[m];int totalsum=0;
cin>>m>>x>>y;
int mhouse=x*y;
int sumforward[m],sumbackward[m];
int i=0,j=1;
for(int i=0;i<m;i++)
{
cin>>a[i];
sumforward[i]=a[i]+mhouse;
sumbackward[i]=a[i]-mhouse;
if( sumbackward[i]<=0 && sumforward[i] >=100 )
   {

       //cout<<"hehe\n"<<" sumback:"<<sumbackward[i]<<" sumforward:"<<sumforward[i]<<"\n";
       totalsum=1;
       
       }
//cout<<"sumforward:"<<sumforward[i]<<" sumbackward:"<<sumbackward[i]<<endl;
}


//cout<<"m:"<<m;
if(totalsum==1)
{cout<<0<<endl;continue;}
while(i!=m )
{
    //cout<<"i:"<<i<<" j:"<<j;
   if( sumbackward[j]<=0 && sumforward[i] >=100 )
   {

       //cout<<"hehe\n"<<" sumback:"<<sumbackward[i]<<" sumforward:"<<sumforward[i]<<"\n";
       totalsum=0;
       break; 
       }
if(i==0 && sumbackward[i]>1)    
{totalsum=totalsum+(sumbackward[i]-1);
//cout<<"totalsum i=0:"<<totalsum<<endl;
}
if(sumbackward[j]>sumforward[i])
{
    //cout<<"sumback:"<<sumbackward[j]<<" i:"<<i<<" sumforward:"<<sumforward[i]<<" j:"<<j<<"\n";
    totalsum=totalsum+(sumbackward[j]-sumforward[i])-1;
    //cout<<"totalsum j>i:"<<totalsum<<endl;
    }
if(i==m-1 && sumforward[i]<100)
{totalsum=totalsum+(100-sumforward[i]);
//cout<<"totalsum i=m-1:"<<totalsum<<endl;
}

i++;j++;
//cout<<"i:"<<i<<" j:"<<j;
}

cout<<totalsum<<endl;
    }
}

/*int main()
{
int m,x,y;
cin>>m>>x>>y;
int a[m],sumforward[m],sumback[m],finalsum=0;
for(int i=0;i<m;i++)
{cin>>a[i];
sumforward[i]=(a[i]+(x*y));
sumback[i]=a[i]-(x*y);

cout<<"sum forward:"<<sumforward[i]<<" sum back:"<<sumback[i]<<endl;
}

for(int i=0;i<m;i++)
{
    int temp=sumback[i];
    if(i==0 && sumback[i]>1)
{finalsum=finalsum+(sumback[i]-1);
cout<<"finalsum at i:"<<finalsum<<" sum back:"<<sumback[i]<<endl;
}

else if(i>0  && sumback[i]>sumforward[i-1]){
finalsum=finalsum+(sumback[i]-sumforward[i-1]);
cout<<"finalsum at back -forword:"<<finalsum<<endl;
if(i==m-1)
{finalsum=finalsum+(100-sumforward[i]);
cout<<"finalsum at m-1:"<<finalsum<<endl;
}
}
else if(i==m-1)
{finalsum=finalsum+(100-sumforward[i]);
cout<<"finalsum at m-1:"<<finalsum<<endl;
}



}
if(finalsum<=0)
cout<<0;
else
{
    cout<<finalsum;    
}


}*/