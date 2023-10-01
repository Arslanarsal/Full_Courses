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

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    vector<vector<int>> ans;
    if (!root)
    {
        return ans;
    }

    stack<TreeNode *> st1, st2;
    st1.push(root);
    vector<int> temp;
    TreeNode *n;

    temp.push_back(root->val);
    while (!st1.empty() || !st2.empty())
    {
        ans.push_back(temp);
        temp.clear();

        while (!st1.empty())
        {
            n = st1.top();
            st1.pop();

            if (n->right)
            {
                st2.push(n->right);
                temp.push_back(n->right->val);
            }
            if (n->left)
            {
                st2.push(n->left);
                temp.push_back(n->left->val);
            }
        }
        if (!temp.empty())
        {
            ans.push_back(temp);
            temp.clear();
        }

        while (!st2.empty())
        {
            n = st2.top();
            st2.pop();

            if (n->left)
            {
                st1.push(n->left);
                temp.push_back(n->left->val);
            }

            if (n->right)
            {
                st1.push(n->right);
                temp.push_back(n->right->val);
            }
        }
    }

    if (!temp.empty())
    {
        ans.push_back(temp);
        temp.clear();
    }
    return ans;
}

void display(vector<vector<int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    struct TreeNode *root = new TreeNode(3);
    // root->left = new TreeNode(9);
    // root->right = new TreeNode(20);

    // root->right->right = new TreeNode(7);
    // root->right->left = new TreeNode(15);
    vector<vector<int>> v;
    v = zigzagLevelOrder(root);
    display(v);

    return 0;
}