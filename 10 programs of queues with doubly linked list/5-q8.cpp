// enqueue all numbers till 100 and dequeue the odd numbers into another queue and display it

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
    int dequeue(){
        if ( front == NULL){
            cout << "Queue is empty" << endl;
            return 0;
        }
        int val = front->data;
        front = front->next;
        if (front != NULL){
            front->prev = NULL;
        }
        return val;
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
