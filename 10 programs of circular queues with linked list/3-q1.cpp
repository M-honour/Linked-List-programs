// enqueue 3 elements taken from user and display it

#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

class Linked_List{
public:
    Node *front = NULL;
    Node *rear = NULL;

    void enqueue(int val){
        Node *newnode = new Node;
        newnode->data = val;

        if (front == NULL){
            front = newnode;           
        }
        else{
            rear->next = newnode;
        }
        rear = newnode;
        rear->next = front;
    }
    void dequeue(){
        if ( front == NULL){
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "The dequeued element is: " << front->data << endl;

        if (front == rear){
            front = NULL;
        }
        else{
            front = front->next;
        }
        rear->next = front;
    }

    void DisplayList(){
        Node *temp = front;
        while (temp->next != front){
            cout << temp->data << "  ";
            temp = temp->next;
        } 
        cout << temp->data << "  "<<endl;
    }
};

int main()
{
    class Linked_List L;
    int n1, n2, n3;
    cout << "Enter 3 elements: ";
    cin >> n1; cin >> n2; cin >> n3;
    L.enqueue(n1); L.enqueue(n2); L.enqueue(n3);
    
    L.DisplayList();

    return 0;
}
