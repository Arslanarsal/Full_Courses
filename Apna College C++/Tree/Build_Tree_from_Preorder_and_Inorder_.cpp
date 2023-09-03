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

//------>>>>>>>  Build tree using inorder and preorder Array

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

//------>>>>>>>  Build tree using inorder and preorder Array And here we use Map;

TreeNode *buildTree(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int InStart, int InEnd, map<int, int> &mp)
{
    if (preStart > preEnd || InStart > InEnd)
    {
        return NULL;
    }

    TreeNode *root = new TreeNode(preorder[preStart]);
    int inroot = mp[root->val];
    int numleft = inroot - InStart;

    root->left = buildTree(preorder, preStart + 1, preStart + numleft, inorder, InStart, inroot - 1, mp);

    root->right = buildTree(preorder, preStart + numleft + 1, preEnd, inorder, inroot + 1, InEnd, mp);
    return root;
}

TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    map<int, int> mp;
    for (int i = 0; i < inorder.size(); i++)
    {
        mp[inorder[i]] = i;
    }

    return buildTree(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, mp);
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