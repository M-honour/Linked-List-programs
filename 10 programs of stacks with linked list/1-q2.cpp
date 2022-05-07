// push 4 elements taken from user pop 2 elements and display it

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
        cout << endl;
    }
};

int main()
{
    class Linked_List L;
    int n1, n2, n3, n4;
    cout << "Enter 3 elements: ";
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    L.push(n1);
    L.push(n2);
    L.push(n3);
    L.push(n4);

    L.DisplayList();

    L.pop();
    L.pop();

    L.DisplayList();

    return 0;
}
