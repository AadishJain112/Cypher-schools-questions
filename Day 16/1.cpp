#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

void insertInSortedOrder(Node *&head, int value)
{
    Node *newNode = new Node(value);

    if (!head || head->data >= value)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next && temp->next->data < value)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void displayList(Node *head)
{
    while (head)
    {
        cout << head->data;
        if (head->next)
            cout << "->";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;
    int n, value, newValue;

    cout << "Enter the number of elements in the sorted linked list: ";
    cin >> n;
    cout << "Enter the elements (sorted): ";
    for (int i = 0; i < n; ++i)
    {
        cin >> value;
        insertInSortedOrder(head, value);
    }

    cout << "Enter the value to insert: ";
    cin >> newValue;

    insertInSortedOrder(head, newValue);

    cout << "Updated Linked List: ";
    displayList(head);

    return 0;
}
