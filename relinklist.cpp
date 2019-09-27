#include<iostream>
using namespace std;
struct node
{
int data;
node* link;
};

node* head=NULL;
node* endme=NULL;
void create(int value)
{
node* temp;
temp= new node;
temp->link=NULL;

temp->data=value;

if(head==NULL)
{
    head=temp;
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
node* temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<" ";
temp=temp->link;
}

}



int main()
{
while(1){
int a;
cout<<"Enter the number to insert in linklist"<<endl;
cin>>a;create(a);
cout<<"Enter do you wanna end now 1/2"<<endl;
int x;
cin>>x;
if(x==2)
{
    display();
    break;}


}




}