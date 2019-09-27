//
//  main.cpp
//  recursion
//
//  Created by Jack Len on 8/22/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//

/*#include <iostream>
using namespace std;

void recurs(int n[],int t,int c)
{
    
    if(t==4)
    {}
    else
      recurs(n,t+1,0);
    
    cout<<n[t]<<" "<<t<<endl;
    //cout<<"c:"<<c<<endl;
}

int main(int argc, const char * argv[]) {
    int n;
    
    cin>>n;
    int a[5]={1,2,3,4,5};
    recurs(a,0,0);
    return 0;
}
*/
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
    
    
};
node *start=NULL;
node *endme=NULL;
node* temp2;
int level=0;
void createlist(int value)
{
    level++;
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

void first(int value)
{
    level++;
    node *temp;
    temp=new node;
    temp->data=value;
    
    temp->link=start;
    start=temp;
}


void display()
{
    node *temp;
    temp=new node;
    temp=temp2;
    for(int i=0;i<level;i++)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
        
    }
    
    cout<<endl;
    
}
void reverse(node *start)
{
    
    
    node* temp;
    
    //SinglyLinkedListNode* next2;
    
    temp2=start;
    //  next2=NULL;
    int i=level;
    //start=start->link;
    while(i>0)
    {
        
        temp->link=temp2;
        cout<<" temp2:"<<temp2->data<<endl;
        start=start->link;
        cout<<"start:"<<start->data<<endl;
        temp=start;
        cout<<" temp:"<<temp->data<<endl;
        
        //temp2=start;
        
        //head=temp;
        i--;
    }
    
    display();
}


int main()
{
    int x,v;
    while(1)
    {
        cout<<"1.Insert"<<" "<<"2.Display"<<" "<<"3.first"<<"4.reverse"<<endl;
        cin>>x;
        if(x==1)
        {cout<<"Enter a value:";cin>>v; cout<<endl;
            createlist(v);
        }
        else if(x==3)
        {cout<<"Enter a value:";cin>>v; cout<<endl;first(v);}
        else if(x==4)
        {cout<<"reverse:"<<endl;reverse(start);}
        else
        {display();break;}
    }
    
    
}

