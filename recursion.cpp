#include<iostream>
using namespace std;

void hello(int x){       
    if (x==0)
        return ;
    else
        hello(x-1);                             
        cout<<"This value have been removed from first stack:"<<x<<endl;
        hello(x-1);                            
        cout<<"This value have been removed from second stack:"<<x<<endl;
}
int main()
{hello(3);}
