#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<stack>


using namespace std;

// STACKS

class StackLl{
  list <int> ll;
 public: 

  void pushll(int val){
    ll.push_front(val);
  };
  
  void popll(){
    ll.pop_front();
  };


  int topll(){
    return ll.front();
  };

  bool emptyll(){
    return ll.size() == 0;
  }

};

class Stack{
  vector <int> v;

  public: 

  void push(int val){
    v.push_back(val);
  };
  
  void pop(){
    v.pop_back();
  };


  int top(){
    return v[v.size()-1];
  };

  bool empty(){
    return v.size() == 0;
  }

};


int main() {

//Stack using STL
stack <int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);

while (!st.empty())
{
  cout << st.top() << endl;
  st.pop();
}
cout <<endl;

// Stack using linked list
    StackLl sll;
    sll.pushll(101);
    sll.pushll(201);
    sll.pushll(301);
    sll.pushll(401);
    sll.pushll(501);
    sll.pushll(601);
    sll.pushll(701);
    sll.pushll(801);
    sll.pushll(901);
    sll.pushll(1001);

    cout << "Top element in linked list stack: " << sll.topll() << endl;

    while(!sll.emptyll()){
        cout << sll.topll() << endl;
        sll.popll();
    }



/*
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(100);

    s.top();

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
*/





    return 0;
}