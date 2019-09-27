
#include <iostream>
using namespace std;


struct node{
    
    int data;
    node* link;
    
};
node* head=NULL;
node* head2=NULL;
node* head3=NULL;
node* tail=NULL;
node* tail2=NULL;
node* tail3=NULL;

void createnode(int val)
{
    node* temp;
    temp=new node;
    temp->link=NULL;
    temp->data=val;
    
    if(head==NULL)
    {head=temp;
        tail=temp;
    }
    
    else
    {tail->link=temp;
        tail=temp;
    }
    
        };
void createnode2(int val)
{
    node* temp;
    temp=new node;
    temp->link=NULL;
    temp->data=val;
    
    if(head2==NULL)
    {head2=temp;
        tail2=temp;
    }
    
    else
    {tail2->link=temp;
        tail2=temp;
    }
    
};
void display()
{
    while(head!=NULL)
    {cout<<head->data<<" ";
        head=head->link;
    }
    cout<<endl;
}


void display2()
{
    while(head2!=NULL)
    {cout<<head2->data<<" ";
        head2=head2->link;
    }
    cout<<endl;
}


void mergelist()
{
    cout<<"exuting"<<endl;
    
    
    while(head!=NULL && head2!=NULL)
    {
        node* temp;
        temp=new node;
        temp->link=NULL;
        if(head!=NULL && head2!=NULL)
        {
      if((head->data)<=(head2->data))
      {
          temp->data=head->data;
          if(head3==NULL)
          {
              head3=temp;
              tail3=temp;
          }
          else
          {
              tail3->link=temp;
              tail3=temp;
          }
          head=head->link;
          cout<<"head3 INSerted"<<endl;
      }
           else if((head->data)>=(head2->data))
            {
                temp->data=head2->data;
                if(head3==NULL)
                {
                    head3=temp;
                    tail3=temp;
                }
                else
                {
                    tail3->link=temp;
                    tail3=temp;
                }
                head2=head2->link;
                cout<<"head321 INSerted"<<endl;
            }
        
        
        }
        
        if(head!=NULL && head2==NULL)
        {
            cout<<"final execute"<<endl;
            tail3->link=head;
            
            
        }
        
       if(head==NULL && head2!=NULL)
      {
          tail3->link=head2;
      }
        
    }
    
};


void display3()
{
    while(head3!=NULL)
    {cout<<head3->data<<" ";
        head3=head3->link;
    }
    cout<<endl;
}
int main(int argc, const char * argv[]) {
    int t,x;
    
    while(1)
    { cout<<" 1.insert node  \n 2.display \n 3.exit "<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>t;
        if(t==1)
        {
            cout<<"Enter link list 1 value:";cin>>x;cout<<endl;
            createnode(x);
            cout<<"Enter link list 2 value:";cin>>x;cout<<endl;
            createnode2(x);
            
        }
        else if(t==2)
        {
            //display();
           // display2();
            mergelist();
            display3();
            
        }
        else
            break;
        
    }
    
    
    return 0;
}
