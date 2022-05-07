// push all numbers till 100 and pop the odd numbers into another stack and display it

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

    int pop()
    {
        if (top == NULL)
        {
            cout << "Stack underflow" << endl;
            return 0;
        }
        int val = top->data;
        top = top->next;
        return val;
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
    class Linked_List L_odd;

    for (int i = 1; i <= 100; i++)
    {
        L.push(i);
    }

    for (int i = 1; i <= 100; i++)
    {
        int val = L.pop();
        if (val % 2 != 0)
        {
            L_odd.push(val);
        }
    }

    L_odd.DisplayList();

    return 0;
}
