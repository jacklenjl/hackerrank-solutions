#include<iostream>
#include<algorithm>
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

int height(node* root)
{
if(root)
return 1+max(height(root->left),height(root->right));
else
return -1;

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
int temp;
temp=height(root);
cout<<"temp:"<<temp<<endl;
return 0;
}
