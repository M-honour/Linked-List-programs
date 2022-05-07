// enqueue 3 elements taken from user and display it

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
        newnode->next = NULL;
        
        if(rear == NULL){
            front = newnode; 
            front->prev = NULL;
        }else{
            rear->next = newnode;
            newnode->prev = rear;
        }
        rear = newnode;
    }
    void dequeue(){
        if ( front == NULL){
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "The dequeued element is: " << front->data << endl;
        front = front->next;
        if (front != NULL){
            front->prev = NULL;
        }
    }

    void DisplayList(){
        Node *temp = front;
        cout << "Display queue: ";
        while (temp != NULL){
            cout << temp->data << "  ";
            temp = temp->next;
        } cout<<endl;
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
