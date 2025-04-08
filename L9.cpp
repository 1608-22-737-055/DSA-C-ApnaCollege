#include<iostream>
#include<vector>
using namespace std ;

//Vectors - dynamic in nature
//STL container 
//

void reverse(int vec6[] , int size6  ){
  int start = 0 , end = size6 - 1 ;

  while (start < end)
  {  swap(vec6[start], vec6[end]);
     start++;
     end--;
    
  }
}

int main() 
{
    // vector<int> vec;
    // vector<int> vec = {1,2,3,4,5};
    // cout << vec[3] << endl; // Undefined behavior, as vector is empty

    // vector<int> vec1(5, 10); // 5 elements with value 10
    // cout << vec1[0] << endl; // Output: 10
    // cout << vec1[1] << endl; // Output: 10
    //  for (int i : vec1)
    //  {
    //         cout << i << " " ;
    //  }
    //   cout << endl;
    /*
     vector<char> vec3= {'a','b','c','d','e'};
     vec3.push_back('f');
     
     for (char i : vec3)
     {
        cout << i << " "  << endl;
     }
     cout << endl;
     vec3.pop_back();// remove last element
     cout << vec3.front() << endl; // Output: a
     cout << vec3.back() << endl; // Output: e
     cout << vec3.at(2) << endl; // Output: c
     cout<<vec3.size() << endl; // Output: 5
     cout<<vec3.capacity() << endl; // Output: 5
     cout<<vec3.max_size() << endl; // Output: 2^64 - 1
     cout<<vec3.empty() << endl; // Output: 0 (false)
     */

     /*
     vector<int> vec4 = {1, 2, 3}; 
     vec4.push_back(4);
     vec4.push_back(4);
     vec4.push_back(4);
     cout<< vec4.size() <<endl; // Output: 4
     cout<< vec4.capacity() <<endl; 
     vec4.push_back(5);
     cout<< vec4.capacity() <<endl; 
     cout<< vec4.size() <<endl; // Output: 5 
     */
     //Static vs Dynamic Allocation 
     //(array)static allocation - size is fixed at compile time
     //(vector)dynamic allocation - size is fixed at runtime

     //static stack
     //dynamic heap

     //xor 
     // 1^1 = 0
     // 0^1 = 1
     
    //  vector<int> vec5 = {1,2, 2,3, 3, 4,4,5,5};
      
    //  int ans = 0;
    //  for ( int i : vec5)
    //  {
    //     ans = ans ^ i ;
    //  }
    //  cout << ans << endl; // Output: 2
 
      // Linear search 
      // reverse integer

      vector<int> vec6 = {1, 2, 3, 4, 5};
      int size6 = vec6.size();
      int target = 3;
      bool found = false;
      
      for (int i = 0; i < size6; i++) {
          if (vec6[i] == target) {
              cout << "Found at index: " << i << endl;
              found = true;
              break;
          }
      }

      reverse(vec6.data(), size6);
      for(int val : vec6){
        cout << val << " " ;
      }
      cout << endl; 



    return 0 ;
}