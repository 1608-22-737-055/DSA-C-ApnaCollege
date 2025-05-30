#include<iostream>



using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val){
            data = val;
            next = prev= NULL ;
        }
};

class DoublyList{
    Node* head;
    Node* tail;

    public:
    DoublyList(){
        head = tail = NULL ;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void print(){
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if( head == NULL ){
            head = tail = newNode;
        }else{
            newNode -> prev = tail;
            tail->next = newNode ;
            tail = newNode; 
        }
    }

    void pop_front(){

        if(head == NULL){
            cout << " DLL is empty \n";
            return;
        }
        Node* temp = head;
        head = head->next;

        if(head != NULL){
            head->prev = NULL;
        }

        temp -> next = NULL;
        delete temp;
    }

    void pop_back(){
        
        if(tail == NULL){
            cout << " DLL is empty \n";
            return;
        }
        Node* temp = tail;
        tail = tail->prev;

        if(tail != NULL){
            tail->next = NULL;
        }

        temp -> prev = NULL;
        // cout << "Deleting: " << temp->data << endl;
        delete temp;
    }

};


int main(){

    DoublyList dll;

    dll.push_back(10);
    dll.push_back(20);
    dll.push_back(30);

    dll.pop_front();
    dll.pop_back();

    dll.print();

    return 0;
}