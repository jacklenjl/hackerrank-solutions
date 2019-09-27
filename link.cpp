#include<iostream>
using namespace std;

struct node{

int data;
node* next;
node* prev;
};

node* head;node* tail;node* lasthead;
void create(int value)
{
node* temp;
temp=new node;
temp->data=value;
temp->next=NULL;
temp->prev=NULL;
if(head==NULL)
{
head=temp;
tail=temp;
lasthead=temp;
temp=NULL;
}

else
{
tail->next=temp;
tail=temp;
temp->prev=lasthead;
lasthead=temp;
}

}
void display()
{
node* temp;
temp=head;
cout<<"Forward:";
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<endl<<"Reverse:";
node* temp2;
temp2=lasthead;
while(temp2!=NULL)
{
cout<<temp2->data<<" ";
temp2=temp2->prev;

}
cout<<endl;
}


int main()
{

create(1);
create(2);
create(3);
display();
return 0;
}
