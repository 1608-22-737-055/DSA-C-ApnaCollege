#include<iostream>
#include<queue>
#include<deque>

using namespace std;


int main() {
    queue<int> q ;

    deque<int> dq;

    

    q.push(10);
    q.push(20);
    q.push(30);

    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);
    dq.push_front(70);

    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    while (!dq.empty()){
        cout << dq.front() << " ";
        dq.pop_front();
    }

    dq.pop_back();
    cout<< dq.front() << " " << dq.back() << endl;

    return 0;
    
}