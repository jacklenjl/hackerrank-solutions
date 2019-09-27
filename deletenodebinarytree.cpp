#include<iostream>
#include<queue>
using namespace std;


struct node
{
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
return (temp);

}
node* insert(node* root,int data)
{

if(root==NULL)
root=create(data);
else if(data<=root->data)
root->left=insert(root->left,data);
else
root->right=insert(root->right,data);

return(root);


}
void inorder(node* root)
{
if(root==NULL)
return;
inorder(root->left);
cout<<" "<<root->data;
inorder(root->right);
}
void levelorder(node* root)
{
queue <node*> q;
queue <int> w;
q.push(root);
w.push(root->data);
while(!q.empty())
{
node* c=q.front();
cout<<c->data<<" ";
if(c->left!=NULL)
{q.push(c->left);w.push(c->left->data);}
if(c->right!=NULL)
{q.push(c->right);w.push(c->right->data);}
q.pop();

}
cout<<"\nEnter element to delete ?"<<endl;
int temp;
cin>>temp;
node* root2;
root2=NULL;
while(!w.empty())
{
 if(temp==w.front())
 {w.pop();}
 else   
{root2=insert(root2,w.front());
w.pop();}
}
cout<<"Inorder root2 values are:"<<endl;
inorder(root2);
}






int main()
{
node* root;
root=NULL;
root=insert(root,5);
root=insert(root,7);
root=insert(root,3);
root=insert(root,4);
root=insert(root,1);
root=insert(root,6);
root=insert(root,8);
levelorder(root);
cout<<endl<<endl;
//inorder(root);
}

