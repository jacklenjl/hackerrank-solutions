#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};



    node *head=NULL, *tail=NULL,*rev;


void createnode(int value)
{
    node *temp=new node;
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        tail=temp;
        temp=NULL;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
    }

void display()
{
    cout<<"display"<<endl;
    node *temp=new node;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}
void reverse()
{
    node *ptr=head;
    node *temp;
    node *current=head;
    
   // temp=new node;
    temp=NULL;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        current->next=temp;
        cout<<"current->data:"<<current->data<<endl;
        
        temp=current;
        cout<<"temp->data:"<<temp->data<<endl;
        //if((ptr->next)==NULL)
            //break;
        //cout<<"ptr->data:"<<ptr->data<<endl;
        current=ptr;
       
      
        
        
        
    }
    head=temp;
    display();
    
}
int main()
{
    while(1)
    {
cout<<"1.Insert "<<"2.display "<<"3.reverse "<<"4.exit "<<endl;
        int x,z;cin>>x;
        
        if(x==1)
        {cin>>z;createnode(z);}
        else if(x==2)
        {display();}
        else if(x==3)
        {reverse();}
        else
            break;
        
        
    }
    
    
}


