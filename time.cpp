#include<iostream>
using namespace std;
int main()
{
string frontNumber[12]={
    "1","2","3","4","5","6","7","8","9","10","11","12"
    };  
string backNumber[9]={
    "00","01","10","15","30","40","45","47","28"
};      

string frontWord[12]={
"one","two","three","four","five","six","seven",
"eight","nine","ten","eleven","twelve"
};
string s;
cin>>s;
string cut=":";
string token[2];
token[0]= s.substr(0, s.find(cut)); 
int len=token[0].length();
token[1]= s.substr(len+1, s.length());
cout<<token[0]<<"endl"<<token[1]<<endl;

}