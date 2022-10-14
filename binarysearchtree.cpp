#include<iostream>
using namespace std;
struct Node{
    char data;
    Node *leftChild;
    Node *rightChild;

};
void Inorder(Node *root)
{
if (root == NULL)
{
return;
}

Inorder(root->leftChild);
cout<<root->data << " ";
Inorder(root->rightChild);

}
Node *Insert(Node *root,char data)
{
if(root==NULL)
{
root= new Node();
root->data=data;
root->leftChild=root->rightChild=NULL;
return root;
}
else if (data<=root->data)
{
root->leftChild=Insert(root->leftChild,data);
}
else
{
root->rightChild=Insert(root->rightChild,data);
}
return root;

}

int main()
{
Node *root=NULL;
char value;
int counter;
int *arr = new int(5);
cout<<"enter number of elements = ";
cin>>counter;
for (int i = 0; i < counter; i++){
    cout<<"enter elements"<<" "<<(i+1)<<" = ";
    cin>>value;
    root = Insert(root,value);
    }
    cout<<"in-order: ";
Inorder(root);};