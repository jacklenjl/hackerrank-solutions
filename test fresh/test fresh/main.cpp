#include <iostream>
using namespace std;
int main()
{

    int a[5][5];
    int sum=0;
    for(int i=0;i<6;i++)
    {   for(int j=0;j<6;j++)
        { cin>>a[i][j];}
    }
    
        


    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=j;k<=k+2;k++)
            { sum=a[i][k]+sum;}
            sum=a[i+1][j+1]+sum;
            for(int m=j;m<m+2;m++)
            {sum=a[i+2][m];}
            break;
        }
        
        break;
    
    
    }

    cout<<sum;




}
