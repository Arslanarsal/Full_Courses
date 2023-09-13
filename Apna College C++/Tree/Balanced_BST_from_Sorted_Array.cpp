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

TreeNode *built(vector<int> &nums, int min, int max)
{
    if (min > max)
    {
        return NULL;
    }
    int mid = (min + max) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = built(nums, min, mid - 1);
    root->right = built(nums, mid + 1, max);
    return root;
}

TreeNode *sortedArrayToBST(vector<int> &nums)
{
    return built(nums, 0, nums.size()-1);
}

int main()
{
    vector<int> v = {10, 20};
    struct TreeNode *root = sortedArrayToBST(v);

    // preOrder(root);
    // cout << endl;

    // postOrder(root);
    // cout << endl;

    InOrder(root);
    cout << endl;
    return 0;
}