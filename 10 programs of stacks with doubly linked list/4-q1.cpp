// push 3 elements taken from user and display it

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
        }
    }
};

int main(){
    class Linked_List L;
    int n1, n2, n3;
    cout << "Enter 3 elements: ";
    cin >> n1; cin >> n2; cin >> n3;
    L.push(n1); L.push(n2); L.push(n3);
    L.DisplayList();
    return 0;
}