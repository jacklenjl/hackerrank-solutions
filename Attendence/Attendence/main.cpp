

/*#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int t,n,k,test,count=0;
    cin>>t;
    do{
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>test;
            if(test<=1)
            count++;
        }
        if(count>=k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        
        count=0;
        t--;
    }while(t!=0);
    
    
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    float i,j,k,test,count=0,y;
    cin>>i>>j>>k;
    
    for(int x=i;x<=j;x++)
    {
        int num, rev=0, rem;
        num=x;
        while(num!=0)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        //cout<<"rev:"<<rev<<endl;
        test= (abs(x-rev))/k;
        //cout<<"test:"<<test<<endl;
        y=(int)test;
        if(y==test)
            count++;

    
        
    }
    
    cout<<count;
    
    return 0;
    
}*/
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,sum=2,people=0;
    cin>>n;
    people=floor(5/2);
    for(int i=1;i<n;i++)
    {
        people=people*3;
        //cout<<"people1:"<<people<<endl;
        people=floor(people/2);
        //cout<<"people:"<<people<<endl;
        sum=sum+people;
        
    }
    
    cout<<sum;
    
    
    return 0;
}
