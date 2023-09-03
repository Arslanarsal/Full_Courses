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

TreeNode *buildTree(vector<int> &inorder, int is, int ie, vector<int> &postorder, int ps, int pe, map<int, int> &mp)
{
    if (is > ie || ps > pe)
    {
        return NULL;
    }

    TreeNode *root = new TreeNode(postorder[pe]);

    int inroot = mp[root->val];
    int numright = inroot - is;

    

    root->right = buildTree(inorder, inroot + 1, ie, postorder, ps + numright, pe - 1, mp);
root->left = buildTree(inorder, is, inroot - 1, postorder, ps, ps + numright-1, mp);
    return root;
}

TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    map<int, int> mp;
    for (int i = 0; i < inorder.size(); i++)
    {
        mp[inorder[i]] = i;
    }
    return buildTree(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1, mp);
}

int main()
{
    vector<int> post = {9, 15, 7, 20, 3};
    vector<int> in = {9, 3, 15, 20, 7};
    struct TreeNode *root = buildTree(in, post);
    postOrder(root);
    cout << endl;

    InOrder(root);
    cout << endl;
    return 0;
}