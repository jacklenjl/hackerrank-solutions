#include<iostream>
#include<queue>
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

void levelorder(node *root)
{
  if(root==NULL)
  {return;}
  queue<node*> q;
  q.push(root);

  while(!q.empty())
  {
node* c=q.front();
cout<<c->data<<" ";
if(c->left!=NULL)
{
q.push(c->left);

}
if(c->right!=NULL)
{
q.push(c->right);

}

q.pop();

  }



}


int main()
{
node* root;
root=create(1);
root->left=create(2);
root->right=create(3);
levelorder(root);


}
