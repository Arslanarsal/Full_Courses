#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BSTTree
{
public:
    Node *insert(int data, Node *root)
    {
        if (!root)
        {
            return new Node(data);
        }
        if (data < root->data)
        {
            root->left = insert(data, root->left);
        }
        else
        {
            root->right = insert(data, root->right);
        }
        return root;
    }
};

int main()
{

    return 0;
}