//
//  main.cpp
//  birthday candles
//
//  Created by Kunal Baghel on 8/9/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
/*int main() {
    int n,p=0,count=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];
        p=max(a[i],p);
        if(p==a[i])
            count++;
        
    }
    cout<<count;
    
    return 0;
}
*/
/*int main() {
    long long n,t;
    cin>>n;
    long long a[n];
    
    for(long long i=0;i<n;i++)
    {cin>>a[i];
    }
    for(long long i=0;i<n;i++)
    {
        for(long long j=i+1;j<n;i++)
    {
       t=a[i];
        if(a[i]>a[j])
        {a[i]=a[j];
            a[j]=t;
        }
    }}
    for(long long i=0;i<n;i++)
    {cout<<a[i]<<endl;
    }
    
    return 0;
}
*/
int main() {
    long n;
    
    cin>>n;
    string a[n];
    
    for(long long i=0;i<n;i++)
    {cin>>a[i];
    }
    for(long long i=0;i<n;i++)
    {cout<<a[i]<<endl;
    }
    for(long long i=0;i<n;i++)
    {
        
        string test[a[i].length()];
        for(long long j=i+1;j<n;i++)
        {
            test[a[i].length()]=a[i];
            if(a[i].length()>a[j].length())
            {a[i]=a[j];
                a[j]=test[a[i].length()];
            }
        }
    }
    for(long long i=0;i<n;i++)
    {cout<<a[i]<<endl;
    }
    
    return 0;
}



