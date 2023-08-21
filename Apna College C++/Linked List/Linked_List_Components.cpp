#include <bits/stdc++.h>
using namespace std;

// Creat a ListNode
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

// Add ListNode at the end of the Linked List
void insertAtTail(ListNode *&head, int x)
{
    ListNode *n = new ListNode(x);
    if (head == NULL)
    {
        head = n;
        return;
    }
    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// Display all Linked List
void display(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
    return;
}

int numComponents(ListNode *head, vector<int> &nums)
{

    sort(nums.begin(), nums.end());
    vector<int>::iterator it;
    bool flag = true;
    int count = 0;
    while (head != NULL)
    {
        it = find(nums.begin(), nums.end(), head->val);
        if (it != nums.end())
        {
            if (flag)
            {
                count++;
                flag = false;
            }
        }
        else
        {
            flag = true;
        }
        head = head->next;
    }
    return count;
}

int main()
{
    ListNode *head = NULL;
    insertAtTail(head, 0);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    // insertAtTail(head, 5);
    // insertAtTail(head, 6);
    // display(head);

    vector<int> v = {0, 1, 3 , 4};
    cout << numComponents(head, v);

    return 0;
}