#include<iostream>
using namespace std;

int area(int length,int answer)
{
    
if(length<2)
return answer;
else
answer=answer+((length-2)/2);

return area(length-2,answer);

}


int main()
{
int t,b;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>b;

cout<<area(b,0)<<endl;

}

}