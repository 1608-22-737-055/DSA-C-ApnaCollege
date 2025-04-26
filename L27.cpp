#include<iostream>
#include<vector>

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

int main(){

    vector<int> v1; // vector of integers
    cout << "Size of v1: " << v1.size() << endl; // size of vector
    cout << "Capacity of v1: " << v1.capacity() << endl; // capacity of vector
    cout << "Max size of v1: " << v1.max_size() << endl; // max size of vector
    cout << "Is v1 empty: " << v1.empty() << endl; // check if vector is empty

    return 0 ;
}