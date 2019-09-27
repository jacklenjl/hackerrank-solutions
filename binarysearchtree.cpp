#include<iostream>
using namespace std;
struct node{
int data;
node* left;
node* right;

};

node *create(int value)
{
node* temp;
temp=new node;
temp->data=value;
temp->left=NULL;
temp->right=NULL;
return temp;}
node* insertnode(node* root,int data)
{
if(root==NULL)
root=create(data);

else if(data<=root->data)
{root->left=insertnode(root->left,data);}
else
{root->right=insertnode(root->right,data);}
return root;
}
bool search(node* root,int data)
{
if(root==NULL)
return false; 
else if(root->data==data)
return true;
else if(data<=root->data)
 return search(root->left,data);
else
 return search(root->right,data);
}



int main() {

  node* root=NULL;
  root=insertnode(root,15);
  root=insertnode(root,20);
  root=insertnode(root,10);
  root=insertnode(root,12);
  cout<<"start:"<<root->data<<endl;
cout<<"Enter number to be searched?";
int n;
cin>>n;
bool test=search(root,n);
test==1 ? cout<<"found"<<endl : cout<<"not found"<<endl;


  return 0;
}
