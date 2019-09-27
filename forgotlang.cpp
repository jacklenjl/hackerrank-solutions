#include<iostream>
using namespace std;
int t,n,k,l;
void checkword()
{
cin>>n>>k;

string a[n];string mod;
for(int i=0;i<n;i++)
cin>>a[i];
int arrindex[k];
string finalmod="";int sum=0;
        for(int i=0;i<k;i++)
        {   
         cin>>l;
            arrindex[i]=l;
  
            sum=sum+l;
                for(int j=0;j<l;j++)
            {
                    cin>>mod;
                    finalmod.append(mod+" ");
            }
        }
        string check="";int test=0;
        for(int i=0;i<n;i++)
        {
            string str=a[i];
              if(i>0)
              cout<<" ";
                   for(int i=0;i<finalmod.length();i++)
                   {
                       char c=(char)finalmod[i];
                       if(c==' ')
                       { if(str==check)
                           { cout<<"YES";
                           test=1;break;
                           }
                           check="";
                        }
                       else
                       {check+=c;}

                   }
                
               if(test==0)
               cout<<"NO";
        test=0;
        }
//cout<<finalmod;
}



int main()
{
cin>>t;
for(int i=0;i<t;i++)
{
 checkword();
 cout<<endl;
}





}