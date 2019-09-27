#include <iostream>
using namespace std;

/*struct node{
    int key;
    node* left;
    node* right;
};

struct node *newNode(int i)
{
    
    node *temp=NULL;
    temp->key=i;
    temp->left=temp->right=NULL;
    return temp;
    
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout<<root->key;
        inorder(root->right);
    }
}

struct node* insert(struct node *node,int key)
{
    
    if(node==NULL)
        return newNode(key);
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
     return node;
    
}

int main()
{
    
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    inorder(root);
    
    return 0;
    
    
    
    
    
}

*/

struct node{
    
    int data;
    node *link=NULL;
    
};

node* head=NULL;
node* tail=NULL;

void createnode(int value)
{
    node* temp=new node;
    temp->data=value;
    temp->link=NULL;
    
    if(head==NULL)
    {
        head=temp;
        tail=temp;
        temp=NULL;
        
    }
    else
    {
        tail->link=temp;
        tail=temp;
        
    }
    
}


void display()
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->link;
        
    }
    cout<<endl;
    
}

int main()
{
    while(1){
    cout<<"1.insert \n2.display \n3.exit"<<endl;
    int i,j;
    cin>>i;

    if(i==1)
    {cout<<"enter a value:";cin>>j;
        createnode(j);}
    if(i==2)
    {display();}
    else
        break;
    }
    return 0;
}
