// enqueue all numbers till 100 and dequeue the odd numbers into another queue and display it

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
    class Linked_List L_odd;

    for (int i = 1; i <= 100; i++)
    {
        L.enqueue(i);
    }

    for (int i = 1; i <= 100; i++)
    {
        int val = L.dequeue();
        if (val % 2 != 0)
        {
            L_odd.enqueue(val);
        }
    }

    L_odd.DisplayList();

    return 0;
}
