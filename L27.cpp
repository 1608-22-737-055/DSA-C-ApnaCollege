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



bool comparator(pair<int, int> p1 , pair<int, int> p2){
  if (p1.second < p2.second) return true;  
  if (p1.second > p2.second) return false;  
  
  if(p1.first < p2.first) return true;
  else return false;
}




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

//   list<int> l1 = {1, 2, 3, 4, 5};
//   list<int> l ;
//   l.emplace_back(1);
//     l.push_back(20);
//     l.push_back(30);
//     l.push_front(40);
//     l.push_front(50);

//     for(int val:l){
//         cout << val << " ";
//     }
//     cout << endl;
    
//     l.pop_back();
//     l.pop_front();

//     for(int val:l){
//         cout << val << " ";
//     }
//     cout << endl;

/*
Deque : Double Ended Queue NOT dequeue
deque<int> d = {1, 2, 3};
• push_back & push_front
• emplace_back & emplace_front
• pop_back & pop_front
//size, erase, clear, begin, end, rbegin,
rend, insert, front, back
*/

    // deque<int> d = {1, 2, 3};
    // d.push_back(4);
    // d.push_front(0);
    // d.emplace_back(5);
    // d.emplace_front(-1);
    // for(int val:d){
    //     cout << val << " ";
    // }
    // cout << endl;
    // d.pop_back();
    // d.pop_front();
    // for(int val:d){
    //     cout << val << " ";
    // }


    /*
    Pair
pair<int, int> p = { 3, 5 };
pair<char, int> p = { 'a', 1 };
    */

    // pair<int, int> p0 = { 3, 5 };
    // cout << p0.first << " " << p0.second << endl;
    // pair<int, int> p1 = make_pair(1, 2);
    // cout << p1.first << " " << p1.second << endl;
    
    // pair<int , pair<char, int>> p = {1, {'a',3}};
    // cout << p.first << " " << p.second.first << " " << p.second.second << endl;
    // cout << p.second.first << " " << p.second.second << endl;


    // vector<pair<int , int>> vec = {{1,2},{2,3},{3,4}};

    // for(pair<int, int> p : vec){
    //     cout << p.first << " " << p.second << endl;
    // }
    // cout << endl;
    
    // vec.push_back({4,5});//insert at end
    // vec.emplace_back(5,6); //in-place objects cteate

    // for(auto p : vec){
    //     cout << p.first << " " << p.second << endl;
    // }
    // cout << endl;
/*
Stack
stack<int> s;
push, emplace
top
pop
size
empty
swap
*/

//  stack<int> s;
//  s.push(1);
//     s.push(2);
//     s.push(3);
//     cout << s.top() << endl; 
//     cout << s.size() << endl; 
//     cout << s.empty() << endl;

//     stack<int> s2;
//     s2.swap(s); // swap two stacks


//     while (!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
    
   
//     cout << s.size() << endl; 
//     cout << s2.size() << endl; 

  /*
   Queue
queue<int> q;
push, emplace
front
pop
Size
empty
swap
  
  */
   
    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // cout << q.front() << endl;
    // cout << q.size() << endl;
    // cout << q.empty() << endl;
    // queue<int> q2;
    // q2.swap(q); // swap two queues
    // while (!q.empty()) {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    // cout << endl;
    // cout << q.size() << endl;
    // cout << q2.size() << endl;
    //     while (!q2.empty()) {
    //     cout << q2.front() << " ";
    //     q2.pop();
    // }

   /*
   Priority Queue (mac heap / min heap)
    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> q;
push, emplace
top
pop
size
empty
   */
    
//    priority_queue<int> pq; // max heap
// //   priority_queue<int, vector<int>, greater<int>> pq ;
//     pq.push(5);
//     pq.push(0);
//     pq.push(1);
//     pq.push(2);
//     pq.push(3);
//     cout << pq.top() << endl; // top element
//     cout << pq.size() << endl; // size of queue
//     cout << pq.empty() << endl; // check if queue is empty

//     while (!pq.empty()) {
//         cout << pq.top() << " ";
//         pq.pop();
//     }
//     cout << endl;

//     cout << pq.size() << endl; // size of queue

//     priority_queue<int, vector<int>, greater<int>> pq2;

   /*
Map  (key, value)
map<string, int> m;
m[key] = value;

sorted (ascending order)

insert, emplace
count
erase
find
size, empty, erase
   */

  //  map<string, int> m ;

  //  m["tv"] = 100;
  //  m["laptop"] = 100;
  //  m["headphone"] = 100;
   
  //  m.insert({"camera", 50});
  //  m.emplace(make_pair("phone", 25));

  //  m.erase("tv");

  //   for(auto p:m){
  //     cout << p.first<<" "<<p.second<<endl;
  //   }
  //   cout << endl;
    
  //  cout << "count =" << m.count("laptop") << " "<< "value: "<< m["laptop"] << endl;
   
  //    if(m.find("camera") != m.end()){
  //     cout << "found " ;
  //    }  else {
  //     cout << "not found ";
  //    }
  //     cout << endl;
     
      /*
      Other Maps
• Multi Map
multimap<string, int> m;
• Unordered Map
unordered_mop<string, int> m;
      */

      // multimap<string, int> m1;
      // m1.insert({"tv", 100});
      // m1.insert({"tv", 200});
      // m1.insert({"tv", 300});
      // m1.insert({"tv", 400});
      // // m1.erase("tv");
      // m1.erase(m1.find("tv"));
     
      // for(auto p:m1){
      //   cout << p.first << " " << p.second << endl;
      // }
      // cout << endl;

      // unordered_map<string, int> m2;
      // m2["tv"] = 100;
      // m2["laptop"] = 200;
      // m2["headphone"] = 300;
      // m2["camera"] = 400;
      // m2["phone"] = 500;
      // m2["tv"] = 1000;
      // m2.erase("tv");
      // m2.erase(m2.find("laptop"));
      // for(auto p:m2){
      //   cout << p.first << " " << p.second << endl;
      // }
      // cout << endl;


     /*
     Set
 set<int> s;
 insert, emplace
 count
 erase
 find
 size, empty, erase
     */

    // set <int> s;

    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);

    // s.insert(4);
    // s.insert(5);

    // cout << "size: " << s.size() << endl;

    // for(auto val:s){
    //     cout << val << " ";
    // }
    // cout << endl;

    // lower_bound(s.begin(), s.end(), 3); // returns iterator to first element greater than or equal to 3
    // upper_bound(s.begin(), s.end(), 3); // returns iterator to first element greater than 3
    // cout << "lower_bound: " << *lower_bound(s.begin(), s.end(), 3) << endl;
    // cout << "upper_bound: " << *upper_bound(s.begin(), s.end(), 3) << endl;
    
//     set<int> s1;
// s1. insert(1);
// s1. insert(2);
// s1. insert(3) ;
// s1. insert(4) ;
// s1. insert(5);
// cout<< "lower bound = "<< *(s1.lower_bound(4)) << endl;
// cout << "upper bound = " << *(s1.upper_bound(4)) << endl;

// for(auto val : s1) {
// cout << val << " ";
// }cout << endl;

/*
Other Sets
• Multi Set
multiset<int> s;
• Unordered Set
unordered_set<int> s;

*/

/*

    Algorithms
• Sorting
sort(arr, arr+n)
sort(arr, arr+n, greater<int>())
sort(v.begin(), v,end())

*/
vector<int> vec = {43,22,33,11,2,67,88,97} ;
sort (vec. begin(),vec. end());
for(int val : vec) {
cout<< val << " " ;
}
cout << endl;
 
sort (vec.begin(),vec.end(),greater<int>());
for(int val : vec) {
cout<< val << " " ;
}
cout << endl;


vector<pair<int,int>> vec1 = {{10,2},{2,3},{3,4},{3,4}};
sort (vec1. begin(),vec1. end(), comparator); // sort by second element custom function is written above the int main
for(auto p : vec1) {
cout<< p.first  << " " << p.second << endl ;
}

/*
Algorithms
• Reverse
reverse(v.begin(), v.end())
• Next Permutation
next_permutotion(v.begin(), v.end())
• swap, min, max

  Max & Min Element
max_element(v.begin(), v.end())
min_element(v.begin(), v.end())
  Binary Search
binary_search(v.begin(), v.end(), target)
   Count Set Bits
_builtin_popcount( )
_builtin_popcount/( )
_builtin_popcount/l( )

*/

//  vector<int> vec2 = {1,2,3,4,5};
//   reverse(vec2.begin()+1, vec2.begin()+3);

//   for(auto val : vec2) {
//     cout << val << " ";
//   }
//   cout << endl;

string s = "bca";
prev_permutation(s.begin(), s.end());
cout << s << endl;

vector<int> vec45 = {1, 2, 3,32,42,34,23, 4, 5};
int a=9 , b=6;
swap(a, b);
cout << "min: " << min(1, 2) << endl;
cout << "max: " << max(1, 2) << endl;


cout << *(max_element(vec45.begin(), vec45.end())) << endl;


cout << *(min_element(vec45.begin(), vec45.end())) << endl;


sort(vec45.begin() , vec45.end());
cout << "binary search: " << binary_search(vec45.begin(), vec45.end(), 12) << endl;

int n =15; 
long int n1 =15;
long long int n2 = 15;

cout << "count set bits: " << __builtin_popcount(n) << endl;
cout << "count set bits: " << __builtin_popcountl(n1) << endl;
cout << "count set bits: " << __builtin_popcountll(n2) << endl;








    return 0 ;
}