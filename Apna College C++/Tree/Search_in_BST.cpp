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

TreeNode *searchBST(TreeNode *root, int val)
{
    if (!root)
    {
        return NULL;
    }
    else if (root->val == val)
    {
        return root;
    }
    else if (val < root->val)
    {
        return searchBST(root->left, val);
    }
    else if (val > root->val)
    {
        return searchBST(root->right, val);
    }
}

int main()
{
    struct TreeNode *root = NULL;
    root = BST(root, 5);
    BST(root, 20);
    BST(root, 19);
    BST(root, 15);
    BST(root, 11);
    BST(root, 17);

    BST(root, 23);
    BST(root, 25);
    BST(root, 24);
    BST(root, 28);

    InOrder(root);
    cout << endl;

    root = searchBST(root, 15);
    InOrder(root);
    cout << endl;
    return 0;
}