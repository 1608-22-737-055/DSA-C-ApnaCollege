#include<iostream>
#include<algorithm>

using namespace std;

// Circular linked list

class Node {
    public:
       int data;
       Node* next;

       Node(int val){
          data = val;
          next = NULL;
       }
};

class CircularList{
    Node* head;
    Node* tail;

    public:
    CircularList(){
        head = tail = NULL;
    }

    void insertAtHead(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void print(){
        if(head == NULL){
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        do
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "head\n";
    }

    void insertAtTail(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    void deleteAtHead(){
        if(head == NULL){
            cout << "List is empty\n";
            return;
        }
        if(head == tail){ // Only one node
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = head;
            head = head->next;
            tail->next = head; // Update tail's next to new head
            delete temp;
        }
    }

    void deleteAtTail(){
        if(head == NULL){
            cout << "List is empty\n";
            return;
        }
        if(head == tail){ // Only one node
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = head; // Update tail's next to head
        }
    }
};

int main(){
    CircularList cl;
    cl.insertAtHead(10);
    cl.insertAtHead(20);
    cl.insertAtHead(30);

    cl.insertAtTail(40);
    cl.insertAtTail(50);
    cl.insertAtTail(60);

    cl.deleteAtHead();
    cl.deleteAtTail();

    cl.print();

    return 0;
}