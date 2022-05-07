// push 3 elements taken from user and display it

#include <iostream>
#include <cmath>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

class Linked_List
{

public:
    Node *top = NULL;

    void push(int val)
    {

        Node *newnode = new Node;

        newnode->data = val;
        newnode->next = top;

        top = newnode;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack underflow" << endl;
            return;
        }

        cout << "The popped element is: " << top->data << endl;
        top = top->next;
    }

    void DisplayList()
    {
        Node *temp = top;

        cout << "Display stack: ";
        while (temp != NULL)
        {
            cout << temp->data << "  ";
            temp = temp->next;
        }
    }
};

int main()
{
    class Linked_List L;
    int n1, n2, n3;
    cout << "Enter 3 elements: ";
    cin >> n1;
    cin >> n2;
    cin >> n3;
    L.push(n1);
    L.push(n2);
    L.push(n3);
    L.DisplayList();

    return 0;
}
