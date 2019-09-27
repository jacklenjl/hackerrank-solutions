#include<iostream>
using namespace std;
struct node
{
int data;
node* left;
node* right;
};

node* create(int value)
{
node* temp=new node;
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
return (root);
}
void inorder(node* root)
{
if(root==NULL)
return;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}
int main()
{
node* root=NULL;
root=insert(root,5);
root=insert(root,8);
root=insert(root,4);
cout<<root->left->data<<endl;
inorder(root);cout<<endl;
return 0;

}

/*#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

node* head=NULL;
node* tail=NULL;
node* rev=NULL;
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
        rev=temp;
        temp=NULL;
    }
    
    else
    {
        tail->next=temp;
        tail=temp;
        temp->prev=rev;
        rev=temp;
        
    }
    
}

void display()
{
    
    node* temp;node* temp2;
    temp=head;temp2=rev;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->prev;
    }
    cout<<endl;
}
int main()
{
    while(1)
    {
        cout<<"enter choice \n1.insert \n2.display \n3.exit\n";int n=0;cin>>n;cout<<endl;
        if(n==1)
        {
            cout<<"Enter the number:";int t;cin>>t;cout<<endl;
            create(t);
        }
        
       else if(n==2)
        {
            display();
        }
        
        else
        {
            break;
        }
        
    }
    
}



*/


/*#include<iostream>
 #include <queue>
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
 {return root=create(data);}
 if(data<=root->data)
 {root->left=insert(root->left,data);}
 else
 {
 root->right=insert(root->right,data);
 }
 return (root);
 }
 
 void levelorder(node* root)
 {
 queue <node*> q;
 q.push(root);
 while(!q.empty())
 {
 node* c=q.front();
 cout<<c->data<<endl;
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
 root=insert(root,15);
 root=insert(root,10);
 root=insert(root,20);
 levelorder(root);
 
 }*/
