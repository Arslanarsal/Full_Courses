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



int main()
{
    struct TreeNode *root = NULL;
    root = BST(root, 5);
    BST(root, 1);
    BST(root, 3);
    BST(root, 4);
    BST(root, 2);
    BST(root, 7);


    return 0;
}