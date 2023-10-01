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

void verticalTraversal(TreeNode *root, int idx, map<int, vector<int>> &mp)
{
    if (!root)
    {
        return;
    }
    mp[idx].push_back(root->val);
    verticalTraversal(root->left, idx - 1, mp);
    verticalTraversal(root->right, idx + 1, mp);
}

vector<vector<int>> verticalTraversal(TreeNode *root)
{
    map<int, vector<int>> mp;
    vector<vector<int>> ans;
    verticalTraversal(root, 0, mp);
    map<int, vector<int>>::iterator it;

    for (it = mp.begin(); it != mp.end(); it++)
    {
        vector<int> temp =  (it->second);
        sort(temp.begin(), temp.end());
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<vector<int>> ans;
    ans = verticalTraversal(root);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}