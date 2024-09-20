#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

void insertAtEnd(Node *&head, int value)
{
    if (!head)
        head = new Node(value);
    else
    {
        Node *temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = new Node(value);
    }
}

void deleteValue(Node *&head, int value)
{
    Node *temp = head, *prev = nullptr;
    while (temp && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }
    if (!temp)
        return;
    if (!prev)
        head = temp->next;
    else
        prev->next = temp->next;
    delete temp;
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
    int n, value, delValue;

    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> value;
        insertAtEnd(head, value);
    }

    cout << "Enter value to delete: ";
    cin >> delValue;

    deleteValue(head, delValue);
    displayList(head);

    return 0;
}
