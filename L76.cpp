#include<iostream>
#include<iostream>
#include<vector>

using namespace std;

//LRU Cache LL

/*
class LRUCache {
public:

    class Node {
        public:
          int key, val;
          Node* prev;
          Node* next; 

          Node(int k, int v){
            key = k;
            val = v;
            prev = next = NULL;
          }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1); 

    unordered_map<int, Node*> m;
    int limit;

   void addNode(Node* newNode) {
    Node* oldNext = head->next;

    newNode->next = oldNext;
    newNode->prev = head;

    head->next = newNode;
    if (oldNext) oldNext->prev = newNode;
}

    void delNode(Node* oldNode){
        Node* oldPrev = oldNode->prev;
        Node* oldNext = oldNode->next;

        oldPrev->next =oldNext;
        oldNext->prev = oldPrev;
    }

    LRUCache(int capacity){
        limit = capacity;
        head->next=tail;
        tail->prev=head;
    }
  
   int get(int key) {
    if (m.find(key) == m.end()) {
    return -1; // Not found
}

        Node* resNode = m[key];
        int res = resNode->val;

        // Move this node to the front (most recently used)
        delNode(resNode);
        addNode(resNode);

        return res;
    }
void put(int key, int value) {
    if (m.find(key) != m.end()) {
        // If key exists, remove the old node
        Node* existingNode = m[key];
        m.erase(key);
        delNode(existingNode);
    }

    if (m.size() == limit) {
        // Evict least recently used item
        Node* lru = tail->prev;
        m.erase(lru->key);
        delNode(lru);
    }

    Node* newNode = new Node(key, value);
    addNode(newNode);
    m[key] = newNode;
}

};
*/
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */


class Node {

  public:
  int data;
  Node* next;

  Node(int val) {
    data = val;
    next = NULL;
  }

};

class Queue{
    Node* head;
    Node* tail;

    public: 
      Queue(){
         head = tail = NULL;
      }

      void push(int data){
         Node* newNode = new Node(data);

         if(empty()){
            head = tail = newNode;
         }else{
            tail->next = newNode;
            tail = newNode;
         }
      }

      void pop(){
            if(empty()) {
                cout << "Queue is empty" << endl;
                return;
            }
    
            Node* temp = head;
            head = head->next;
    
            if(head == NULL) {
                tail = NULL; // If the queue becomes empty
            }
    
            delete temp; // Free the memory of the popped node
      }

      int front() {
         if(empty()){
            cout << "Queue is empty" << endl;
            return -1; // or throw an exception
         } else {
            return head->data;
         }
      }

      bool empty(){
        return head == NULL;
      }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    cout << "Front element: " << q.front() << endl; // Should print 10
    q.pop();
    cout << "Front element after pop: " << q.front() << endl; // Should print 20
    q.pop();
    cout << "Front element after another pop: " << q.front() << endl; // Should indicate queue is empty
   
    return 0;
}