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

vector<vector<int>> levelOrder(TreeNode *root)
{

    vector<int> temp;
    vector<vector<int>> ans;

    if (root == NULL)
    {
        return ans;
    }

    queue<TreeNode *> Qu;
    Qu.push(root);

    while (!Qu.empty())
    {
        Qu.push(NULL);
        while (Qu.front())
        {
            TreeNode *n = Qu.front();
            Qu.pop();
            temp.push_back(n->val);
            if (n->left)
            {
                Qu.push(n->left);
            }
            if (n->right)
            {
                Qu.push(n->right);
            }
        }
        ans.push_back(temp);
        temp.clear();
        Qu.pop();
    }
    return ans;
}

void display(vector<vector<int>> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        // cout << endl;
    }
}
int main()
{
    // struct TreeNode *root = NULL;
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);

    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    vector<vector<int>> ans = levelOrder(root);
    display(ans);
    return 0;
}