// Find the product of 5 enqueued elements taken by the user by dequeuing them

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

    int dequeue(){
        if ( front == NULL){
            cout << "Queue is empty" << endl;
            return 0;
        }
        int val = front->data;

        if (front == rear){
            front = NULL;
        }


        else{
            front = front->next;
        }
        rear->next = front;

        return val;
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

    for (int i = 0; i < 5; i++)
    {
        int val;
        cout << "Enter element " << i + 1 << ": ";
        cin >> val;
        L.enqueue(val);
    }

    int result = 1;
    for (int i = 0; i < 5; i++)
    {
        result *= L.dequeue();
    }

    cout << "product of queue is: " << result;

    return 0;
}
