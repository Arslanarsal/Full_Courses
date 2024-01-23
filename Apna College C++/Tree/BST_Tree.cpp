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


//------->>>>>     Make BST Tree
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

    preOrder(root);
    cout << endl;

    postOrder(root);
    cout << endl;

    InOrder(root);
    cout << endl;
    return 0;
}