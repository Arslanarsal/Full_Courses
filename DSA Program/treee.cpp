#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *right;
    node *left;
};

node *creatNode(int data)
{
    node *ptr = new node;
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

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