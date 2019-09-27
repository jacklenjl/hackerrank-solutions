#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string s,t;int k,i=0,j=0,h=0,g=0;;
    cin>>s>>t;
    cin>>k;
    
    i=(int)s.length();
    j=(int)t.length();
    if(i<j)
        goto jum;
    
    // cout<<"i:"<<i<<endl;
    
    do{
        
        if(i==0||j==0 )
            break;
        
        else   if(s.at(h)==t.at(g))
        {i--;j--;}
        else
            break;
        
        h++;
        g++;
        
    }while(1);
    if((i+j)==k||(i+j)<k)
        cout<<"Yes"<<endl;
    else
        jum:    cout<<"No"<<endl;
    
    
    return 0;
    
}
