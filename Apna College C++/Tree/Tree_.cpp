#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *left;
    node *right;

    node(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

//------->>>>>     root-left-right
void preOrder(struct node *root)
{
    if (root != NULL)
    {
        cout << root->val << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

//------->>>>>     left-right-root
void postOrder(struct node *root)
{
    if (root != NULL)
    {
        preOrder(root->left);
        preOrder(root->right);
        cout << root->val << " ";
    }
}

//------->>>>>     left-root-right
void InOrder(struct node *root)
{
    if (root != NULL)
    {

        preOrder(root->left);
        cout << root->val << " ";
        preOrder(root->right);
    }
}

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(4);

    
    preOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    InOrder(root);
    cout << endl;
    return 0;
}