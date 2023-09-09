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

vector<int> RightView(TreeNode *root)
{

    vector<int> temp;

    if (root == NULL)
    {
        return temp;
    }

    queue<TreeNode *> Qu;
    Qu.push(root);

    while (!Qu.empty())
    {
        temp.push_back(Qu.front()->val);
        Qu.push(NULL);

        while (Qu.front())
        {
            TreeNode *n = Qu.front();
            Qu.pop();

            if (n->left)
            {
                Qu.push(n->left);
            }
            if (n->right)
            {
                Qu.push(n->right);
            }
        }
        Qu.pop();
    }
    return temp;
}

void display(vector<int> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
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

    vector<int> ans = RightView(root);
    display(ans);
    return 0;
}