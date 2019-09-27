#include<iostream>
using namespace std;
int Fibonacci(int number)
{
    if (number <= 1) 
    return number;
cout<<number<<" ";
    return (Fibonacci(number - 2) + Fibonacci(number - 1));
    
}
int main()
{

int a;
cout<<"Enter the Number:";cin>>a;Fibonacci(a);cout<<endl;
//cout<<endl<<Fibonacci(a)<<endl;

}