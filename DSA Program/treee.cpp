#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;
};

// Function to create a new node
node *creatNode(int data)
{
    // Create a new node
    node *ptr = new node;

    // Assign data to the new node
    ptr->data = data;

    // Initialize left and right children as NULL
    ptr->left = NULL;
    ptr->right = NULL;

    // Return the new node
    return ptr;
}
/*
                                2
                               / \
                              3   4
                             / \   \
                            5   6   8
*/
int main()
{
    node *p1 = creatNode(2);
    node *p2 = creatNode(3);
    node *p3 = creatNode(4);
    node *p4 = creatNode(5);
    node *p5 = creatNode(6);

    node *p7 = creatNode(8);
    p1->left = p2;
    p1->right = p3;

    p2->left = p4;
    p2->right = p5;

    p3->left = NULL;
    p3->right = p7;

    // when we creat node the left and right node are already NULL thats why we dont write code here
    // p4 , p5 , p7 are NuLL;

    return 0;
}