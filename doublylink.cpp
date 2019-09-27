#include<iostream>
using namespace std;

struct node{
int data;
node* next;
node* prev;
};

node* head=NULL;
node* tail=NULL;
node* revhead=NULL;
node* revtail=NULL;


void createlist(int value)
{
node* temp =new node;
temp->data=value;
temp->next=NULL;
temp->prev=NULL;
if(head==NULL)
{
head=temp;
tail=temp;
revhead=temp;
revtail=temp;
temp=NULL;
}

else
{
tail->next=temp;
tail=temp;
temp->prev=revhead;
revhead=temp;
}

}


void display()
{
node* temp;
temp=head;
while(temp!=NULL)
{
cout<<" "<<temp->data;
temp=temp->next;
}
node* temp2;
temp2=revhead;
cout<<endl;
while(temp2!=NULL)
{
cout<<" "<<temp2->data;
temp2=temp2->prev;

}

}


int main()
{
while(1){
cout<<"\n1.list \n2.display \n3.exit"<<endl;
int a;cin>>a;
if(a==1)
{
cout<<"enter value for list1:";int x;cin>>x;
createlist(x);}
else if(a==2)
{display();}
else
break;
}


return 0;}
