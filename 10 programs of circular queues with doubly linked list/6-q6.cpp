// enqueue 10 elements using for loop and dequeue 5 elements using while loop and display it

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

    for (int i = 0; i < 10; i++)
    {
        L.enqueue(i);
    }
    L.DisplayList();

    int c = 0;
    while (c < 5)
    {
        L.dequeue();
        c++;
    }

    L.DisplayList();

    return 0;
}
