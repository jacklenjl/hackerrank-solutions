
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    long long  int n,count=0;
    cin>>n;
    string str[n],sum;
    for( long long int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for( long long int i=0;i<n;i++)
    {
        if((i+1)>=n)
            break;
        
        sum=str[i+1];
        reverse(sum.begin(),sum.end());
        if(sum==str[i])
        {count++;}
        
    }
    cout<<count;
    return 0;
}
