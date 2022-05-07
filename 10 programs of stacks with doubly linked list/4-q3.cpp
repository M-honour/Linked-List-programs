// pop more elements than pushed to prompt the underflow message

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
    void pop(){
        if (top == NULL){
            cout << "Stack underflow" << endl; return;
        }
        cout << "The popped element is: " << top->data << endl;

        if (top->next == NULL){
            top = NULL;
        }
        else{
            top = top->next;
            top->prev = NULL;
        }
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

    L.push(1);

    L.pop();
    L.pop();

    return 0;
}
