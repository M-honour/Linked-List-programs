// push 10 elements using while loop and display it

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

    int c = 0;
    while (c < 15)
    {
        L.push(c);
        c++;
    }

    L.DisplayList();

    return 0;
}
