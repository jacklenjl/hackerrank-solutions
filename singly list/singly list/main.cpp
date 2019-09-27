//
//  main.cpp
//  singly list
//
//  Created by Jack Len on 6/12/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//

#include <iostream>
#include<stdio.h>
using namespace std;
struct node{
    int data;
    node *link;
    
    
};
node *start=NULL;
node *endme=NULL;
int level=0;
void createnode(int value)
{   level++;
    node *temp;
    temp=new node;
    temp->data=value;
   
    if(start==NULL)
    {
    start=temp;
    endme=temp;
    temp=NULL;
    }
    else
    {
        
        endme->link=temp;
        endme=temp;
        
        
        
    }
    
}
void display()
{
    node *temp;
    temp=new node;
    temp=start;
    for(int i=0;i<level;i++)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }
    
}


int main(int argc, const char * argv[]) {
    int x,y;
    do{

        
        cout<<"Insert 1"<<endl;
        cout<<"display 2"<<endl;
        cin>>x;
        if(x==1)
        {cout<<"enter the value:"<<endl;cin>>y;
            createnode(y);}
        if(x==2)
        {display();break;}
        
        
    }while(1);
    

    return 0;
}
