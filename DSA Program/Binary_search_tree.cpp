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
// this function ceheck BST true or false
int isBST(node *root)
{
    static node *prev = NULL; // static is a data type where value one time store and we can change the value increase or decrease the value
    // but static line never execuite again
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        cout << prev->data << " "; // in prev first vale 3 store than 5 , than 7 , 9 and 11;
        isBST(root->right);
    }
    else
    {
        return 1;
    }
}

// Searching in BST
node *searchBTS(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        searchBTS(root->left, key);
    }
    else
    {
        searchBTS(root->right, key);
    }
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

node *searchIter(node *root, int key)
{
    while (root != NULL)
    {
        if (root->data == key)
        {
            return root;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
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
    // cout << endl
    //      << isBST(p)<<endl;
    addNode(p, 15);
    addNode(p, 10);
    addNode(p, 13);

    InOrder(p);
    cout<<endl;

    // if (searchBTS(p, 15))
    // {
    //     cout << "Value is found " << endl;
    // }
    // else
    // {
    //     cout << "Value is not found " << endl;
    // }
    // cout << searchIter(p, 5) << endl;

    return 0;
}