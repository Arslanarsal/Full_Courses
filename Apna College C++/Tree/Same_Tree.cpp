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

TreeNode *BST(TreeNode *root, int val)
{
    if (!root)
    {
        return new TreeNode(val);
    }
    if (val < root->val)
    {
        root->left = BST(root->left, val);
    }
    else
    {
        root->right = BST(root->right, val);
    }
    return root;
}

bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (!p && !q)
    {
        return true;
    }
    else if (p == NULL || q == NULL)
    {
        return false;
    }
    if (p->val != q->val)
    {
        return false;
    }

    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

void preOrder(struct TreeNode *root)
{
    if (root != NULL)
    {
        cout << root->val << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
    struct TreeNode *root = NULL;
    struct TreeNode *root1 = NULL;
    root = BST(root, 5);
    BST(root, 1);
    BST(root, 3);

    root1 = BST(root1, 5);
    BST(root1, 1);
    BST(root1, 31);

    preOrder(root);
    cout << endl;
    preOrder(root1);
    cout << endl;

    cout << isSameTree(root, root1);

    return 0;
}