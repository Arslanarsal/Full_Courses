#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};
node *creatNode(int data)
{
    node *ptr = new node;
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

//------->>>>>     root-left-right
void preOrder(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

//------->>>>>   left-right-root
void postOrder(node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

//------->>>>>     left-root-right
void InOrder(node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);
    }
}

// this function will print tree root after the left side print ;
void rootprint(node *root, int n)
{
    if (root != NULL)
    {

        if (n == 0)
        {
            rootprint(root->left, n + 1);
            cout << root->data << " ";
            n++;
            rootprint(root->right, n);
        }

        else
        {
            cout << root->data << " ";
            rootprint(root->left, n + 1);
            rootprint(root->right, n);
        }
    }
}

int main()
{
    node *p = creatNode(9);
    node *p1 = creatNode(5);
    node *p2 = creatNode(11);
    node *p3 = creatNode(3);
    node *p4 = creatNode(3);

    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    preOrder(p);
    cout << "\n";
    postOrder(p);
    cout << "\n";
    InOrder(p);
    cout << "\n";

    // rootprint(p , 0);
    return 0;
}