#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        left = NULL;
        right = NULL;
    }

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

// int search(int inorder[], int start, int end, int cur)
// {
//     for (int i = start; i <= end; i++)
//     {
//         if (inorder[i] == cur)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// TreeNode *buildTree(int pre[], int in[], int start, int end)
// {
//     static int idx = 0;
//     if (start > end)
//     {
//         return NULL;
//     }
//     int cur = pre[idx];
//     idx++;
//     TreeNode *node = new TreeNode(cur);
//     if (start == end)
//     {
//         return node; // If there is no node on left and right then return node
//     }

//     int pos = search(in, start, end, cur);
//     node->left = buildTree(pre, in, start, pos - 1);
//     node->right = buildTree(pre, in, pos + 1, end);

//     return node;
// }

int search(vector<int> &inorder, int start, int end, int cur)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == cur)
        {
            return i;
        }
    }
    return -1;
}

TreeNode *buildTre(vector<int> &pre, vector<int> &in, int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }
    int cur = pre[idx];
    idx++;
    TreeNode *node = new TreeNode(cur);
    if (start == end)
    {
        return node; // If there is no node on left and right then return node
    }

    int pos = search(in, start, end, cur);
    node->left = buildTre(pre, in, start, pos - 1);
    node->right = buildTre(pre, in, pos + 1, end);

    return node;
}

TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    return buildTre(preorder, inorder, 0, inorder.size() - 1);
}

int main()
{
    vector<int> pre = {1, 2, 4, 3, 5};
    vector<int> in = {4, 2, 1, 5, 3};
    struct TreeNode *root = buildTree(pre, in);
    preOrder(root);
    cout << endl;

    InOrder(root);
    cout << endl;
    return 0;
}