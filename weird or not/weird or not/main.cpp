//
//  main.cpp
//  weird or not
//
//  Created by Kunal Baghel on 2/25/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    if(n%2==1)
    {cout<<"Weird";}
    else if (2<=n && n<5  && n%2==0)
        cout<<"Not Weird";
    else if(n>20 && n%2==0)
    {cout<<"Not Weird";}
    else
    {cout<<"Weird";}
    return 0;
}
