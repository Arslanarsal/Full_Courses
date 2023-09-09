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


//Given the Depth of the Tree
int maxDepth(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}


//Given the Diameter of the Tree maximum nodes between two nodes
int height(TreeNode *root, int &diameter)
{
    if (!root)
    {
        return 0;
    }
    int l = height(root->left, diameter);
    int r = height(root->right, diameter);

    diameter = max(diameter, l + r);
    return 1 + max(l, r);
}

int diameterOfBinaryTree(TreeNode *root)
{
    int diameter = 0;
     height(root, diameter) ;
     return diameter;
}

int main()
{
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    preOrder(root);

    cout << endl;
    cout << maxDepth(root) << endl;

    cout << diameterOfBinaryTree(root);
    return 0;
}