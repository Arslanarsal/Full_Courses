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

// bool findpath(TreeNode *root, TreeNode *n, vector<TreeNode *> &path)
// {
//     if (!root)
//     {
//         return false;
//     }
//     if (root == n)
//     {
//         path.push_back(root);
//         return true;
//     }

//     path.push_back(root);
//     if (findpath(root->left, n, path) || findpath(root->right, n, path))
//     {
//         return true;
//     }
//     path.pop_back();
//     return false;
// }


//------------------>>>>>>>>>>>>>>>Iterator method
// TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
// {
//     vector<TreeNode *> path1, path2;
//     findpath(root, p, path1);
//     findpath(root, q, path2);
//     for (int i = 0; i < path1.size() && path2.size(); i++)
//     {
//         if (path1[i] != path2[i])
//         {
//             return path1[i - 1];
//         }
//     }
//     return NULL;
// }

// --------->>>>>>>>>>>>>>>>Using recursion method
TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root == p || root == q)
    {
        return root;
    }
    TreeNode *leftLCA = lowestCommonAncestor(root->left, p, q);
    TreeNode *RIGHTLCA = lowestCommonAncestor(root->right, p, q);
    if (leftLCA && RIGHTLCA)
    {
        return root;
    }

    if (leftLCA)
    {
        return leftLCA;
    }
    return RIGHTLCA;
}

void display(vector<TreeNode *> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]->val << "  ";
    }
    cout << endl;
}
int main()
{
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    preOrder(root);
    cout << endl;

    root = lowestCommonAncestor(root, root->left, root->right);
    // if (root)
    // {
    cout << root->val << endl;
    // }
    // else
    // {
    //     cout << "No value;";
    // }

    return 0;
}