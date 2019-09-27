#include<iostream>
using namespace std;

struct node
{
int data;
node * next;

};
node* head1=NULL;
node* tail1=NULL;

node* head2=NULL;
node* tail2=NULL;
void createlist1(int value)
{
node* temp=new node;
temp->data=value;
temp->next=NULL;
if(head1==NULL)
{
head1=temp;
tail1=temp;
temp=NULL;
}

else
{
tail1->next=temp;
tail1=temp;
}

}

void createlist2(int value)
{
node* temp=new node;
temp->data=value;
temp->next=NULL;
if(head2==NULL)
{
head2=temp;
tail2=temp;
temp=NULL;
}

else
{
tail2->next=temp;
tail2=temp;
}

}

void display()
{
node* n1;n1=head1;
node* n2;n2=head2;
while(n1!=NULL)
{
cout<<" "<<n1->data;
n1=n1->next;
}

cout<<endl;
while(n2!=NULL)
{
cout<<" "<<n2->data;
n2=n2->next;
}
cout<<endl;
}
void mergepoint()
{
node* n1;
node* n2;
n1=head1;n2=head2;
while(n1!=NULL||n2!=NULL)
{
int t=0;
   if(n1!=NULL) {if(n1->next==NULL)
    {
        n2=head2;
        while(n2!=NULL)
        {

cout<<"n1->data:"<<n1->data<<endl;
cout<<"n2->data:"<<n2->data<<endl;

if(n1->data==n2->data)
{cout<<n2->data;t=1;break;}
else
n2=n2->next;
        }
    }
    else
n1=n1->next;
}

else{
if(n2->next==NULL)
    {
        n1=head1;
        while(n1!=NULL)
        {
if(n1->data==n2->data)
{cout<<n2->data;t=1;break;}
else
n2=n2->next;
        }
    }
    else
n2=n2->next;
}
if(t==1)
break;

}
}


int main()
{

//cout<<"\n1.list \n2.list \n3.display \n4.merge  \n5.exit"<<endl;
//int a;cin>>a;
while(1)
{
cout<<"\n1.list \n2.list \n3.display \n4.merge \n5.exit"<<endl;
int a;cin>>a;
if(a==1)
{
cout<<"enter value for list1:";int x;cin>>x;
createlist1(x);}
else if(a==2)
{
cout<<"enter value for list2:";int x;cin>>x;
createlist2(x);
}
else if(a==3)
{display();}
else if(a==4)
{mergepoint();}
else
break;

}

return 0;
}


