#include <iostream>
#include <limits.h>
using namespace std;

class node
{
public:
    int key;
    node *left;
    node *right;
    int hight;
};

int getHight(node *n)
{
    if (n == NULL)
    {
        return -1;
    }
    return n->hight;
}

int getBalanceFactor(node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return getHight(n->left) - getHight(n->right);
}

node *rightRotate(node *y)
{
    node *x = y->left;
    node *t2 = x->right;

    x->right = y;
    y->left = t2;

    y->hight = max(getHight(y->left), getHight(y->right)) + 1;
    x->hight = max(getHight(x->left), getHight(x->right)) + 1;

    return x;
}

node *leftRotate(node *x)
{
    node *y = x->right;
    node *t2 = y->left;

    y->left = x;
    x->right = t2;

    x->hight = max(getHight(x->left), getHight(x->right)) + 1;
    y->hight = max(getHight(y->left), getHight(y->right)) + 1;

    return y;
}

node *creatNode(int data)
{
    node *newNode = new node;
    newNode->key = data;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->hight = 0;
    return newNode;
}

node *insert(node *nod, int key)
{
    if (nod == NULL)
        return creatNode(key);

    if (key < nod->key)
        nod->left = insert(nod->left, key);
    else if (key > nod->key)
        nod->right = insert(nod->right, key);

    nod->hight = 1 + max(getHight(nod->left), getHight(nod->right));
    int bf = getBalanceFactor(nod);

    // Left Left Case
    if (bf > 1 && key < nod->left->key)
    {
        return rightRotate(nod);
    }
    // Right Right Case
    if (bf < -1 && key > nod->right->key)
    {
        return leftRotate(nod);
    }
    // Left Right Case
    if (bf > 1 && key > nod->left->key)
    {
        nod->left = leftRotate(nod->left);
        return rightRotate(nod);
    }
    // Right Left Case
    if (bf < -1 && key < nod->right->key)
    {
        nod->right = rightRotate(nod->right);
        return leftRotate(nod);
    }
    return nod;
}

void InOrder(node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        cout << root->key << " ";
        InOrder(root->right);
    }
}

int main()
{

    node *root = NULL;

    root = insert(root, 9);
    // cout << root->key << endl;
    root = insert(root, 8);
    cout << "Hight is " << root->hight << endl;
    cout << root->key << endl;
    root = insert(root, 7);
    cout << "Hight is " << root->hight << endl;
    cout << root->key << endl;
    root = insert(root, 6);
    cout << "Hight is " << root->hight << endl;
    cout << root->key << endl;
    root = insert(root, 5);
    cout << "Hight is " << root->hight << endl;
    cout << root->key << endl;
    root = insert(root, 2);
    cout << "Hight is " << root->hight << endl;
    cout << root->key << endl;
    // root = insert(root, 1);
    // cout << root->key << endl;
    // root = insert(root, 0);
    // cout << root->key << endl;
    InOrder(root);

    return 0;
}