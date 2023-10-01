#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};
TreeNode *built(vector<int> &A, int &i, int bound)
{
    if (i == A.size() || A[i] > bound)
    {
        return NULL;
    }
    TreeNode *root = new TreeNode(A[i++]);
    root->left = built(A, i, root->val);
    root->right = built(A, i, bound);
    return root;
}

TreeNode *bstFromPreorder(vector<int> &preorder)
{
    int i = 0;
    return built(preorder, i, INT_MAX);
}

void preorder(TreeNode *root)
{
    if (root)
    {
        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    vector<int> v = {8, 5, 1, 7, 10, 12};
    TreeNode *root = bstFromPreorder(v);
    preorder(root);
    return 0;
}