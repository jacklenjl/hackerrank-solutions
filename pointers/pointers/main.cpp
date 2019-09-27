//
//  main.cpp
//  pointers
//
//  Created by Jack Len on 2/11/18.
//  Copyright © 2018 Jack Len. All rights reserved.
//

#include <iostream>
using namespace std;
struct node
{
    int info;
    struct node *left;
    struct node *right;
}*root;
class testme
{
public:   void insert(node *tree,node *newval)
    {
       if(root==NULL)
        root=new node;
        root->info=newval->info;
        root->left=NULL;
        root->right=NULL;
        if(root!=NULL)
            root->left=newval;
        
        
        
    }
public: void display(node *ptr)
    {
        
        cout<<ptr->info<<endl;
        
        
    }
    
};

int main(int argc, const char * argv[]) {
    root=NULL;
    testme t;
    node *temp;
    temp=new node;
    cout<<"enter the number"<<endl;
    cin>>temp->info;
    t.insert(root,temp);
    t.display(root);
   
    /*hel *f,j;
    f=&j;
    f->ff();
    int *u,**v;
    int r=5;
    u=&r;
    v=&u;
    
    cout<<**v<<endl;
    cout<<*u<<endl;*/
    
    
    /*f=&j;
    f->ff();
    f++;
    f->ff();
    int *p,*q;
    int a[5]={1,2,3,4};
    p=&a[3];
    q=&a[0];
    int t=7;
    int *x,*y;
    x=&t;
    y=&t;
    *x=3;
    *y=4;
    *x=*y;
    cout<<"t:"<<t<<endl;
    
    for(int i=0;i<2;i++,p--,q++)
    {int t;
        if(*p>*q)
        {//cout<<"*p"<<*p<<" *q"<<*q<<" i"<<i<<endl;
            t=*q;
           // cout<<"t"<<t<<endl;
            *q=*p;
           // cout<<"*q new"<<*q<<endl;
            *p=t;
        //cout<<"*p new"<<*p<<endl;
        }
    }
    int *r=&a[0];
    for(int i=0;i<4;i++,r++)
        cout<<*r<<endl;*/
    
    return 0;
}
