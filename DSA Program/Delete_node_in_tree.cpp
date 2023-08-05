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

// Add a node in BST tree
void addNode(node *root, int key)
{
    node *pre = NULL;
    node *ptr = creatNode(key);
    while (root != NULL)
    {
        pre = root;
        if (root->data == key)
        {
            cout << "Can't insert " << key << " in tree " << endl;
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    if (key < pre->data)
    {
        pre->left = ptr;
    }
    else
    {
        pre->right = ptr;
    }
}

void InOrder(node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);
    }
}

node *inOderPredecessor(node *root)
{
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

node *left_leaf(node *root)
{
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
node *right_leaf(node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
// delete node in a tree
node *deleteNode(node *root, int value)
{
    node *ipre = NULL;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->right == NULL && root->left != NULL && root->data == value)
    {
        ipre = left_leaf(root->left);
        root->data = ipre->data;
        root->left = deleteNode(root->left, ipre->data);
    }
    else if (root->left == NULL && root->right != NULL && root->data == value)
    {
        ipre = right_leaf(root->right);
        root->data = ipre->data;
        root->right = deleteNode(root->right, ipre->data);
    }

    else if (root->left == NULL && root->right == NULL)
    {
        delete (root);
        return NULL;
    }
    else if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        ipre = inOderPredecessor(root->left);
        root->data = ipre->data;
        root->left = deleteNode(root->left, ipre->data);
    }
    return root;
}

int main()
{
    node *p = creatNode(9);
    node *p1 = creatNode(5);
    node *p2 = creatNode(11);
    node *p3 = creatNode(3);
    node *p4 = creatNode(7);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    InOrder(p);
    cout << endl;

    // addNode(p, 15);
    // addNode(p, 10);
    addNode(p, 13);
    InOrder(p);
    cout << endl;

    deleteNode(p, 11);
    InOrder(p);
    cout << endl;
    cout << p->data << endl;

    return 0;
}