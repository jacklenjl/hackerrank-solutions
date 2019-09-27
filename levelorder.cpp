#include<iostream>
using namespace std;

struct node{
int data;
node* left;
node* right;
};

node* create(int value)
{
node* temp;
temp=new node;
temp->data=value;
temp->left=NULL;
temp->right=NULL;
return(temp);
}
void inorderdisplay(node* root,string s,int a)
{
if(root==NULL)
{
cout<<s<<" "<<"function terminated"<<endl;
return;
}
cout<<root->data<<" stack:"<<a<<endl;
inorderdisplay(root->left,"left",1);
cout<<root->data<<" "<<"stack:"<<a<<" "<<endl;
inorderdisplay(root->right,"right",2);


}
void preorder(node* root,string s)
{
if(root==NULL)
return;
cout<<root->data<<s<<" ";
preorder(root->left,"left");
preorder(root->right,"right");
}
void postorder(node* root,string s)
{
if(root==NULL)
{return;}
postorder(root->left,"left");
postorder(root->right,"right");
cout<<root->data<<" "<<s;
}



void levelorder(node* root)
{
node *root2;
root2=root;
while(root){
if(root==NULL)
{}
else if(root->left!=NULL && root->right!=NULL)
{cout<<root->left->data<<" ";
cout<<" "<<root->right->data<<" ";
}
root=root->left;
}
cout<<endl;
}
void testroot(node* root)
{
if(root->left==NULL)
{}
  else
  {cout<<root->left->data<<" ";}
  if(root->right==NULL)
  {}
    else
{cout<<root->right->data<<" ";}


}
void leveliterator(node* root)
{
  node* root2;
  //root2=root;
root2=root->right;
while(root!=NULL||root2!=NULL)
{
testroot(root);
root=root->left;
testroot(root2);
root2=root2->right;


}
}

int main()
{

node* root=create(1);
root->left=create(2);
root->right=create(3);
root->right->right=create(7);
root->right->left=create(8);
root->left->left=create(4);
root->left->right=create(5);
root->left->right->left=create(6);
//inorderdisplay(root,"root",1);
//postorder(root,"root");
cout<<endl;
//preorder(root,"root");
cout<<endl;
//levelorder(root);
leveliterator(root);
//testroot(root);
cout<<endl;
}
