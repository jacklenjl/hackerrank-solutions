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
return temp;
}

node* insert(node* root,int data)
{
if(root==NULL)
root=create(data);
else if(data<=root->data)
root->left=insert(root->left,data);
else
root->right=insert(root->right,data);

return (root);

}



bool binarycheck(node* root)
    {
        cout<<endl;
         queue<node*> q;
         queue<int> w;
int i=0;
    q.push(root);
    w.push(root->data);
    while(!q.empty())
    {
node* c=q.front();
//cout<<"stack front:"<<c->data<<" ";
if(c->left!=NULL )
{q.push(c->left);w.push(c->left->data);}
if(c->right!=NULL )
{q.push(c->right);w.push(c->right->data);}

q.pop();
    }
    cout<<"\n\n is binary or not?:";
 w.pop();
 
 while (!w.empty()) { 
       int test=w.front();
       w.pop();
    if(test<w.front())
w.pop();
else
{
    i=1;break;
}

        
    }

if(i==1)
return false;
else
return true;
    }

    void levelorder(node* root)
{
    queue<node*> q;

    q.push(root);
    while(!q.empty())
    {
node* c=q.front();
cout<<c->data<<" ";
if(c->left!=NULL)
q.push(c->left);
if(c->right!=NULL)
q.push(c->right);

q.pop();

    }

}

int main()
{
node* root=NULL;
root=insert(root,5);
root=insert(root,6);
root=insert(root,4);
root->left->left=create(7);
levelorder(root);
bool test;
test=binarycheck(root);
//cout<<"\n\ntest:"<<test;
test==0 ? cout<<"false" : cout<<"true";
return 0;
}
