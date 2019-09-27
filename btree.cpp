#include<iostream>
using namespace std;
struct node
{
int data;
node* left;
node* right;

};



struct node* createnode(int value)
{
node* temp=new node;
temp->data=value;
temp->left=NULL;
temp->right=NULL;
return (temp);
}


void predisplay(node* root,string s)
{
if(root==NULL)
{
//cout<<endl;
return;}
else
cout<<" "<<root->data<<s<<" ";
predisplay(root->left,"left");
predisplay(root->right,"right");

}

void postdisplay(node* root,string s)
{
if(root==NULL)
{return;}
postdisplay(root->left,"left");
postdisplay(root->right,"right");
cout<<root->data<<s<<" ";


}

void inorderdisplay(node* root,string s)
{
if(root==NULL)
return;
inorderdisplay(root->left,"left");
cout<<root->data<<s<<" ";
inorderdisplay(root->right,"right");


}

int main()
{

node* root=createnode(1);
root->left=createnode(2);
root->right=createnode(3);
root->left->left=createnode(4);
root->left->right=createnode(7);
root->right->right=createnode(5);
root->right->right->left=createnode(8);
cout<<"preorder(root,left,right):"<<endl;
predisplay(root,"root");
cout<<"\n\n\npostorder(left,right,root):"<<endl;

postdisplay(root,"root");
cout<<"\n\n\ninorder(left,root,right):"<<endl;
inorderdisplay(root,"root");
cout<<endl;
return 0;
}
