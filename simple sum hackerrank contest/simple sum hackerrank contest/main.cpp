#include <iostream>
using namespace std;

long int f(long int k,long int n) {
    long  int  sum = 0;
    
    for (long int i = 1; i <= n; i += 1) {
        sum += i;//cout<<"sum="<<sum<<endl;
        i *= k;//cout<<"i="<<i<<endl;
    }
    
    return sum;
}

int main(int argc, const char * argv[]) {
    long   int a,b,k,n,q;
    long int sum=0;
    cin>>q;
    
    do{
        cin>>k>>a>>b;
        n=a;
        do{
            cout<<"f(k,n)"<<" k="<<k<<" n="<<n;
            sum=sum+f(k,n);
            cout<<"sum"<<sum<<endl;
            
            a++;
            n++;
        }while(b>=a);
        cout<<sum%(1000000000+7)<<endl;
        sum=0;
        q--;
    }while(q>0);
    
    
    
    return 0;
}

