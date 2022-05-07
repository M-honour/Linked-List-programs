// Find the sum of 5 pushed elements taken from the user

#include <iostream>
using namespace std;

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

class Linked_List{
public:
    Node *top = NULL;
    void push(int val){
        Node *newnode = new Node;
        newnode->prev = NULL;
        newnode->data = val;
        if (top == NULL){
            newnode->next = NULL;
        }
        else{
            newnode->next = top;
            top->prev = newnode;
        }
        top = newnode;
    }
    int pop(){
        if (top == NULL){
            cout << "Stack underflow" << endl; return 0;
        }
        int val = top->data;

        if (top->next == NULL){
            top = NULL;
        }
        else{
            top = top->next;
            top->prev = NULL;
        }
        return val;
    }
    void DisplayList(){
        Node *temp = top;
        cout << "Display stack: ";
        while (temp != NULL){
            cout << temp->data << "  ";
            temp = temp->next;
        } cout<<endl;
    }
};
int main()
{
    class Linked_List L;

    for (int i = 0; i < 5; i++)
    {
        int val;
        cout << "Enter element " << i + 1 << ": ";
        cin >> val;
        L.push(val);
    }

    int result = 0;
    for (int i = 0; i < 5; i++)
    {
        result += L.pop();
    }

    cout << "sum of stack is: " << result;

    return 0;
}
