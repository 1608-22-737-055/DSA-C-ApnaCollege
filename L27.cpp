#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<queue>
#include<stack>
#include<array>
#include<algorithm>
#include<iterator>


using namespace std;

//C++ STL (standard template library) 
//STL is a powerful set of C++ template classes to provide general-purpose classes and functions with templates.
/*
Containers
Iterators
Algorithms
Functors
*/
// Vectors are dynamic arrays, unlike normal array which are static.
// vector functions • size & capacity
/*• push_back & pop_back
• emplace_back
• ) or [1
• front & back
*/
/*
vector<int> vec;
vector<int> vec = {1, 2};
vector<int> vec(3, 10);
vector<int> vec2(vec1);

v.[idx] , v.at(idx)
front , back

* erase
• insert
• clear
• empty
*/

int main(){

    // vector<int> v1; // vector of integers
    // cout << "Size of v1: " << v1.size() << endl; // size of vector
    // cout << "Capacity of v1: " << v1.capacity() << endl; // capacity of vector
    // cout << "Max size of v1: " << v1.max_size() << endl; // max size of vector
    // cout << "Is v1 empty: " << v1.empty() << endl; // check if vector is empty
    // v1.push_back(1);
    // v1.push_back(11);
    // v1.push_back(111);
    // v1.push_back(1111);
    // v1.emplace_back(11111);
    // v1.pop_back(); // remove last element

    // cout << "Size of v1: " << v1.size() << endl; // size of vector 
    
    // for( int val : v1){
    //     cout << val << " ";
    // }
    // cout << endl;

    // cout << v1[2] << " " << v1.at(2) << endl; // access element at index 2
    // cout << v1.front() << " " << v1.back() << endl; // access first and last element

    vector<int> v2 = {1,2,3,4,5,8, 10};
     vector<int> v3(5, 10); // vector of size 5 with all elements initialized to 10
     
    //  for(int val : v2){
    //     cout << val << " ";
    //  }
    //  cout << endl;
    
    //  for(int val : v3){
    //     cout  << val << " ";
    //  }
    //  cout<<"v3 " << endl;

    //  v2.erase(v2.begin() + 2); // erase element at index 2
    //  v2.erase(v2.begin() , v2.begin() + 2 );
    //  v2.insert(v2.begin() + 2, 100); // insert 100 at index 2
    // // v2.insert(v2.begin() + 2, 100, 200); // insert 100 elements of value 200 at index 2

    //  for(int val : v2){
    //     cout << val << " ";
    //  }
    //  cout << endl;
    //   v2.clear(); // clear the vector
    //     cout << "Size of v2: " << v2.size() << endl; // size of vector

/*

    Iterators
    • begin & end

*/

//   vector<int> v4 = {1,2,3,4,5,6,7};
//   cout<<"vec.begin() : " << *v4.begin() << endl; // first element
//     cout<<"vec.end() : " << *(v4.end() - 1) << endl; // last element

//     vector<int>::iterator it;

//     for(it=v4.begin(); it!=v4.end(); it++){
//         cout << *it << " ";
//     }
//     cout << endl;

//     for(vector<int>::reverse_iterator it = v4.rbegin(); it!=v4.rend();it++){
//         cout << *it << " ";
//     }
//     cout << endl;

//     for(auto it = v4.rbegin(); it!=v4.rend();it++){
//         cout << *it << " ";
//     }
//     cout << endl;

  /*
  List (doubly linked list)
list<int> I = {1, 2, 3};
• push_back & push_front
• emplace_back & emplace_front
• pop_back & pop_front
//size, erase, clear, begin, end, rbegin,
//rend, insert, front, back
  */

  list<int> l1 = {1, 2, 3, 4, 5};
  list<int> l ;
  l.emplace_back(1);
    l.push_back(20);
    l.push_back(30);
    l.push_front(40);
    l.push_front(50);

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;
    
    l.pop_back();
    l.pop_front();

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;

/*
Deque : Double Ended Queue NOT dequeue
deque<int> d = {1, 2, 3};
• push_back & push_front
• emplace_back & emplace_front
• pop_back & pop_front
//size, erase, clear, begin, end, rbegin,
rend, insert, front, back
*/

    deque<int> d = {1, 2, 3};
    d.push_back(4);
    d.push_front(0);
    d.emplace_back(5);
    d.emplace_front(-1);
    for(int val:d){
        cout << val << " ";
    }
    cout << endl;
    d.pop_back();
    d.pop_front();
    for(int val:d){
        cout << val << " ";
    }














    return 0 ;
}