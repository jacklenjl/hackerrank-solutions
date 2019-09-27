//
//  main.cpp
//  link list
//
//  Created by Kunal Baghel on 6/6/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
Node *head;
void Print()
{
    Node *temp=head;
    
    while(1)
    {
        
      cout<<(temp->data);
        if(temp->next==NULL)
             break;
        temp=temp->next;
        
        
    }
  
    
    
}
void insert(int x)
{
    Node *temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
    
    
}

int main(int argc, const char * argv[]) {
    
    
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
        Print();
    
    }
   
    
   
  
    return 0;
}
