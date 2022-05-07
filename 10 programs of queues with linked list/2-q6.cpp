// enqueue 10 elements using for loop and dequeue 5 elements using while loop and display it

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
        newnode->next = NULL;
        
        if(rear == NULL){
            front = newnode; 
        }else{
            rear->next = newnode;
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
