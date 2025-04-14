
#include <iostream>
#include <vector>

using namespace std;

int main() {
  
    //PS 238 : https://leetcode.com/problems/product-of-array-except-self/
    // Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
    // The problem can be solved in O(n) time and O(1) space complexity.
  /*
    vector <int> ar = {1,2,3,4};
   int n =ar.size();

   vector<int> ans(n,1);

   for(int i=0 ; i<n; i++ ){
       for(int j=0 ; j < n ; j++ ){
           if(i!=j){
               ans[i] *= ar[j];
           }
       }
   }

   for (int i = 0; i < n; i++)
   {
    cout << ans[i] << " ";
   }
   cout << endl;
    */ 

   vector <int> nums = {1,2,3,4};
   int n = nums.size();
   vector<int> ans(n,1);
   
   //pre => ans 
   for(int i =1 ; i<n ; i++){
      ans[i]= ans[i-1]*nums[i-1];
   }
    int post =1;
   //post
   for(int i=n-2; i>=0 ; i--){
       post *= nums[i+1] ; // ith post val
       ans[i] *=post ;
   }

   for (int i = 0; i < n; i++)
   {
    cout << ans[i] << " ";
   }
   cout << endl;




    return 0;
}