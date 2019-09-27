#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



/*int main() {
    int q;
    cin>>q;
    do{
        
        int x,y,z,cata=0,catb=0;
        cin>>x>>y>>z;
        cata=abs(x-z);
        //cout<<"cata"<<abs(cata)<<endl;
        //cout<<"catb"<<catb<<endl;
        catb=abs(y-z);
        if(cata<catb)
            cout<<"Cat A"<<endl;
        else if(catb<cata)
            cout<<"Cat B"<<endl;
        else
            cout<<"Mouse C"<<endl;
        
        q--;
    }while(q>0);
    return 0;
}*/


int main()
{
    int a,count=0,sum=0;
    cin>>a;
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        if(a%p[i]==0)
            count++;
    }
    
    sort(p, p+n);
    
    for(int i=0;i<4;i++)
    {
        sum=sum+p[i];
        
    
    }
    return 0;
}
