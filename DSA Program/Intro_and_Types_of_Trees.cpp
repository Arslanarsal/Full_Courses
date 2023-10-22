/*
A binary tree is a data structure where each node can have at most two children: a left child and a right child. The top node is the root, and nodes with no children are leaves.

         1         -->Root
       /   \
      2     3      -->Children
     / \   / \
    4   5 6   7    --> leaf Node which has no children


Ancestors like parent and it's perents;
Ancestors of node 4: [2, 1]
Ancestors of node 5: [2, 1]
Ancestors of node 6: [3, 1]
Ancestors of node 7: [3, 1]
*/

/*
Types of binary Tree
1) Full binary tree
A full binary tree is a binary tree where every node has either 0 or 2 children, and no node has only one child. All levels are filled except possibly the last level, and if the last level is not completely filled, it is filled from left to right.

         1                                 1
       /   \                             /   \
      2     3                           2     3
     / \   / \                         / \   /
    4   5 6   7                       4   5 6
  full binary tree                Not full binary tree

2) Complete Binary Tree:
A complete binary tree is a binary tree in which all levels are completely filled except possibly the last level, which is filled from left to right.

         1                                 1
       /   \                             /   \
      2     3                           2     3
     / \   / \                         / \     \
    4   5 6   7                       4   5     6
   / \
  8   9
 Complete binary tree              Not Complete binary tree

 3)Perfect binary tree
 A perfect binary tree is a balanced binary tree where all internal nodes have exactly two children, and all leaf nodes are at the same level, creating a complete filling of the last level. The total number of nodes for a given level 'h' is 2^h - 1, where 'h' is the height of the tree.

         1                                 1
       /   \                             /   \
      2     3                           2     3
     / \   / \                         / \   /
    4   5 6   7                       4   5 6
 perfect binary tree                Not perfect binary tree

 4)Balanced binary tree
 A balanced binary tree is a type of binary tree where the height difference between the left and right subtrees of any node is at most one. This balance ensures efficient operations like searching and inserting, typically with a time complexity of O(log n). Common types include AVL trees, red-black trees, and B-trees.

         1                                1
       /   \                             /
      2     3                           2
     / \   / \                         /
    4   5 6   7                       4
 Balanced binary tree                Not Balanced binary tree

 5)Degenerate tree
 A degenerate tree, also known as a pathological or skewed tree, is a binary tree in which each parent node has only one child (either left or right), resembling a linked list. It has poor time complexity (often O(n)) for common operations like searching, inserting, and deleting due to the linear structure it forms.

         1                                           1
          \                                         /
           3                                       2
            \                                     /
             7                                   4
 Degenerate Tree (Right-skewed):           Degenerate Tree (Left-skewed):
*/

#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int main()
{
  TreeNode *root = new TreeNode(1);

  TreeNode *root2 = new TreeNode(2);
  TreeNode *root3 = new TreeNode(3);

  TreeNode *root4 = new TreeNode(4);
  TreeNode *root5 = new TreeNode(5);

  TreeNode *root6 = new TreeNode(6);
  TreeNode *root7 = new TreeNode(7);
  /*
      1
     / \
    2   3
   / \ / \
  4  5 6  7
  */
  root->left = root2;
  root->right = root3;

  root2->left = root4;
  root2->right = root5;

  root3->left = root6;
  root3->right = root7;

  return 0;
}