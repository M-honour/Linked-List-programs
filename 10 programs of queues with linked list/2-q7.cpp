// enqueue all even numbers up to 100 and display it

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

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            L.enqueue(i);
        }
    }

    L.DisplayList();

    return 0;
}
