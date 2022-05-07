// enqueue 4 elements taken from user and dequeue 2 elements and display it

#include <iostream>
using namespace std;

struct Node{
    struct Node *prev;
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
            rear = newnode;
            newnode->prev = front;        
            newnode->next = front;  
        }
        else{
            rear->next = newnode;
            newnode->prev = rear;
            newnode->next = front;
            front->prev = newnode;
            rear = newnode;
        }
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
            front->prev = rear;
            rear->next = front; 
        }
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
    int n1, n2, n3, n4;
    cout << "Enter 4 elements: ";
    cin >> n1; cin >> n2; cin >> n3; cin >> n4;
    L.enqueue(n1); L.enqueue(n2); L.enqueue(n3); L.enqueue(n4);
    L.DisplayList();

    cout<<endl;

    L.dequeue(); L.dequeue();
    L.DisplayList();

    return 0;
}
