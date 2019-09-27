//
//  main.cpp
//  link list 2.0
//
//  Created by Kunal Baghel on 6/6/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>
using namespace std;
struct node{
    
    int data;
node *link;

};

node *head=NULL;

struct node* createnode()
{

    node *memo;
    memo=(struct node*)malloc(sizeof(node));
    return memo;
}
void print()
{
    node *temp1;
    temp1=head;
    
    while(temp1!=NULL)
    {cout<<temp1->data<<endl;
        temp1=temp1->link;
        
    }

}

void insertnode()
{

    node *temp,*t;
    temp=createnode();
    int x,j;
    cin>>j;
    for(int i=0;i<j;i++)
    {
        cin>>x;
        temp->data=x;
        if(head==NULL)
        {  head=temp;cout<<head;}
        else
        {
            t=head;
            while( 1)
            {
                
                if(t->link!=NULL)
                {t=t->link;}
                else
                    t=temp;break;
                
            }
        }

    }
    
    print();
    

}


int main(int argc, const char * argv[]) {
    
    
    insertnode();
    
    
    
    
    
    return 0;
}
