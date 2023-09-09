#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

//------->>>>>     root-left-right
void preOrder(struct TreeNode *root)
{
    if (root != NULL)
    {
        cout << root->val << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

//------->>>>>     left-right-root
void postOrder(struct TreeNode *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->val << " ";
    }
}

//------->>>>>     left-root-right
void InOrder(struct TreeNode *root)
{
    if (root != NULL)
    {

        InOrder(root->left);
        cout << root->val << " ";
        InOrder(root->right);
    }
}

void flatten(TreeNode *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return;
    }
    if (root->left != NULL)
    {
        flatten(root->left);

        TreeNode *temp = root->right;
        root->right = root->left;
        root->left = NULL;

        TreeNode *t = root->right;
        while (t->right)
        {
            t = t->right;
        }
        t->right = temp;
    }
    flatten(root->right);
}

void display(TreeNode *root)
{
    while (root)
    {
        cout << root->val << " ";
        root = root->right;
    }
    cout << endl;
}

int main()
{
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // preOrder(root);
    // cout << endl;

    postOrder(root);
    cout << endl;

    flatten(root);
    display(root);

    // InOrder(root);
    // cout << endl;
    return 0;
}